

/*
 * CbrSettings.cpp
 */

#include <QSettings>
#include <QSignalMapper>
#include <QLineEdit>
#include <QCheckBox>
#include <QComboBox>
#include <QRadioButton>
#include <QSpinBox>
#include <QFileInfo>
#include <QDir>

#include "CbrSettings.h"
#include "CbrQtSettingsProxy.h"

//using namespace cbr;

/*
 * Initalize the settings. Set up the key names by mapping
 * text parameter names to parameter numbers. Set default
 * values.
 */
CbrSettings::CbrSettings() : QObject(), arrayKeyMult_(1000000) {
    addProxy(new CbrQtSettingsProxy());

    signalMapper = new QSignalMapper(this);
    connect(signalMapper, SIGNAL(mapped(int)), SLOT(settingChanged(int)));
}

CbrSettings::~CbrSettings() {
    delete signalMapper;
}

void CbrSettings::clear(bool force) {
    QMapIterator<int, QString> i(keys);
    while (i.hasNext()) {
        i.next();
        int ikey = i.key();

        if (force || !persistent.contains(ikey))
            proxy(ikey)->remove(i.value());
    }

    setDefaults();
}

/*
 * Enters the defaults into the settings if the settings isn't set
 */
void CbrSettings::setDefaults() {
    QMapIterator<int, QVariant> i(defaults);
    while (i.hasNext()) {
        i.next();
        if (!get(i.key()).isValid())
            set(i.key(), i.value());
    }
}

void CbrSettings::addProxy(CbrSettingsProxy *proxy) {
    proxies_.append(proxy);
}

void CbrSettings::addKey(int ikey, const QString &skey, QVariant defaultValue) {
    keys[ikey] = skey;
    proxyMap_[ikey] = proxy();

    if (!defaultValue.isNull())
        defaults[ikey] = defaultValue;
}

CbrSettingsProxy *CbrSettings::proxy(int ikey) {
    if (proxyMap_.contains(ikey))
        return proxyMap_[ikey];
    return proxy();
}

const CbrSettingsProxy *CbrSettings::proxy(int ikey) const {
    if (proxyMap_.contains(ikey))
        return proxyMap_[ikey];
    return proxy();
}

CbrSettingsProxy *CbrSettings::proxy() {
    return proxies_.last();
}

const CbrSettingsProxy *CbrSettings::proxy() const {
    return proxies_.last();
}

QVariant CbrSettings::get(int key) const {
    Q_ASSERT(keys.contains(key));
    if (!keys.contains(key))
        return QVariant();

    const QString& key_name = keys[key];
    const QVariant& default_value = defaults[key];
    return proxy(key)->value(key_name, default_value);
}

bool CbrSettings::keyExists(int key) const {
    return keys.contains(key);
}

QVariant CbrSettings::get(int key, int index) {
    QVariant var;
    if (keys.contains(key))
        var = readArrayValue(key, index);
    return var;
//    if (!keys.contains(key))
//        return QVariant();
//	return readArrayValue(key, index);

    //QString key_name = getKeyNameWithIndex(keys[key], index);

    //const QVariant& default_value = defaults[key];
    //return proxy(key)->value(key_name, default_value);
}

QVariant CbrSettings::getDefault(int key) const {
    if (!keys.contains(key))
        return QVariant();
    return defaults[key];
}

void CbrSettings::set(int key, const QVariant &val) {
    QString key_name = keys[key];
    if (!key_name.isEmpty())
        proxy(key)->setValue(key_name, val);
}

void CbrSettings::set(int key, int index, const QVariant &val) {
    if (index == -1)
        set(key, val);
    else
        writeArrayValue(key, index, val);
}

void CbrSettings::removeSetting(int ikey) {
    QString key_name = keys[ikey];
    if (!key_name.isEmpty())
        proxy(ikey)->remove(key_name);
}

void CbrSettings::mapArrayObject(QObject* obj, int ikey, int index, bool clear) {
    if (obj) {
        QVariant val = get(ikey, index);

        int key = (ikey * arrayKeyMult_) + index;
        mapObject(obj, key, val, clear);
    }
}

void CbrSettings::mapObject(QObject* obj, int key, bool clear) {
    if (obj) {
        QVariant val = get(key);
        mapObject(obj, key, val, clear);
    }
}

void CbrSettings::mapObject(QObject *obj, int key, const QVariant &val, bool clear) {
    signalMapper->setMapping(obj, key);

    if (clear)
        obj->disconnect();

    QString class_name = obj->metaObject()->className();
    if (!class_name.compare("QLineEdit") || !class_name.compare("RangeLineEdit")) {
        QLineEdit* e = static_cast<QLineEdit*> (obj);
        connect(e, SIGNAL(textChanged(const QString&)), signalMapper, SLOT(map()));
        e->setText(val.toString());
    } else if (!class_name.compare("QCheckBox") || !class_name.compare("QRadioButton")) {
        QCheckBox* e = static_cast<QCheckBox*> (obj);
        connect(e, SIGNAL(toggled(bool)), signalMapper, SLOT(map()));
        e->setChecked(isChecked(key));
    } else if (!class_name.compare("QComboBox")) {
        QComboBox* e = static_cast<QComboBox*> (obj);
        connect(e, SIGNAL(currentIndexChanged(int)), signalMapper, SLOT(map()));
        e->setCurrentIndex(val.toInt());
    } else if (!class_name.compare("QSpinBox")) {
        QSpinBox* e = static_cast<QSpinBox*> (obj);
        connect(e, SIGNAL(valueChanged(int)), signalMapper, SLOT(map()));
        e->setValue(val.toInt());
    }
}

void CbrSettings::unmapObject(QObject *obj) {
    signalMapper->removeMappings(obj);
}

QString CbrSettings::getKeyNameWithIndex(const QString &key_name, int index) const {
    if (key_name.isEmpty())
        return key_name;
    return key_name + "/" + QString::number(index);
}

void CbrSettings::settingChanged(int ikey) {
    QObject *obj = 0;
    int key = ikey;
    int index = -1;

    if (ikey > arrayKeyMult_) {
        key = ikey / arrayKeyMult_;
        index = ikey - (key * arrayKeyMult_);
    }

    obj = signalMapper->mapping(ikey);
    if (obj) {
        QString class_name = obj->metaObject()->className();
        if (!class_name.compare("QLineEdit") || !class_name.compare("RangeLineEdit")) {
            QLineEdit* e = static_cast<QLineEdit*> (obj);
            set(key, index, e->text());
        } else if (!class_name.compare("QCheckBox") || !class_name.compare("QRadioButton")) {
            QCheckBox* e = static_cast<QCheckBox*> (obj);
            set(key, index, e->isChecked());
        } else if (!class_name.compare("QComboBox")) {
            QComboBox* e = static_cast<QComboBox*> (obj);
            set(key, index, e->currentIndex());
        } else if (!class_name.compare("QSpinBox")) {
            QSpinBox* e = static_cast<QSpinBox*> (obj);
            set(key, index, e->value());
        }
    }
}

void CbrSettings::saveDir(int key, const QString& path) {
    QFileInfo fi(path);
    QDir dir = fi.dir();
    QString s = dir.absolutePath();
    set(key, s);
}

QString CbrSettings::getDir(int key) const {
    return get(key).toString();

}

// for multiple entry settings

QList<QVariant> CbrSettings::readArray(int ikey) {
    QList<QVariant> values;

    int size = proxy(ikey)->beginReadArray(keys[ikey]);
    for (int i = 0; i < size; ++i) {
        proxy(ikey)->setArrayIndex(i);
        values.append(proxy(ikey)->value("data"));
    }
    proxy(ikey)->endArray();
    return values;
}

void CbrSettings::writeArray(int ikey, const QList<QVariant>& values) {
    remove(keys[ikey].toLatin1());
    proxy(ikey)->beginWriteArray(keys[ikey], values.size());
    for (int i = 0; i < values.size(); ++i) {
        proxy(ikey)->setArrayIndex(i);
        proxy(ikey)->setValue("data", values.at(i));
    }
    proxy(ikey)->endArray();
}

QVariant CbrSettings::readArrayValue(int ikey, int position) {
    QList<QVariant> values = readArray(ikey);
    if (position >= 0 && position < values.size())
        return values[position];
    return QVariant();
}

void CbrSettings::writeArrayValue(int ikey, int position, QVariant value) {
    QList<QVariant> values = readArray(ikey);
    if (position >= 0 && position < values.size())
        values[position] = value;
    writeArray(ikey, values);
}

void CbrSettings::appendArrayValue(int ikey, QVariant value) {
    QList<QVariant> values = readArray(ikey);
    if (values.indexOf(value) == -1)
        values.append(value);
    writeArray(ikey, values);
}

void CbrSettings::removeArrayValue(int ikey, QVariant value) {
    QList<QVariant> values = readArray(ikey);
    const int index = values.indexOf(value);
    if (index < 0)
        return;
    values.removeAt(index);
    writeArray(ikey, values);
}

QString CbrSettings::getEnv(const char* varname) const {

#if 0 // WIN32
    char *buf;
    size_t len;
    _dupenv_s(&buf, &len, varname);
    QString appDataDir(buf);
    free(buf);
#else
    char * pPath;
    pPath = getenv(varname);
    QString appDataDir(pPath);
#endif
    return appDataDir;
}

QString CbrSettings::getMyDocumentsPath() const {
    QSettings settings(QSettings::UserScope, "Microsoft", "Windows");
    settings.beginGroup("CurrentVersion/Explorer/Shell Folders");
    return settings.value("Personal").toString();
}

QString CbrSettings::getHomePath(QString programName) const {
    QString homePath = getMyDocumentsPath();
    homePath += QDir::separator() + QString("CBR");

    if (!programName.isEmpty())
        homePath += QDir::separator() + programName;

    return homePath;
}

QString CbrSettings::getAppDataPath(QString programName) {
    QString appDataPath = getEnv("ProgramData");
    if (appDataPath.isEmpty()) // pre-vista windows
    {
        appDataPath = getEnv("ALLUSERSPROFILE");
        if (!appDataPath.isEmpty())
                appDataPath += QDir::separator() + QString("Application Data");
    }
    if (!appDataPath.isEmpty())
    {
        appDataPath += QDir::separator() + QString("CBR");

        if (!programName.isEmpty())
            appDataPath += QDir::separator() + programName;
    }

    return appDataPath;
}

QString CbrSettings::getUserLocalDataPath(QString programName) {
    QString userLocalDataPath = getEnv("APPDATA");
    if (userLocalDataPath.isEmpty()) // pre-vista windows
    {
        userLocalDataPath = getEnv("USERPROFILE");
        userLocalDataPath += QDir::separator() + QString("Application Data");
    }
    userLocalDataPath += QDir::separator() + QString("CBR");

    if (!programName.isEmpty())
        userLocalDataPath += QDir::separator() + programName;

    return userLocalDataPath;
}

