/****************************************************************************
** Meta object code from reading C++ file 'SitesConfigDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/SitesConfigDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SitesConfigDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SitesConfigDialog_t {
    QByteArrayData data[8];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SitesConfigDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SitesConfigDialog_t qt_meta_stringdata_SitesConfigDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SitesConfigDialog"
QT_MOC_LITERAL(1, 18, 17), // "siteConfigChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 12), // "updateDialog"
QT_MOC_LITERAL(4, 50, 18), // "refreshSitesConfig"
QT_MOC_LITERAL(5, 69, 20), // "browseForSitesConfig"
QT_MOC_LITERAL(6, 90, 7), // "doApply"
QT_MOC_LITERAL(7, 98, 21) // "checkApplyButtonState"

    },
    "SitesConfigDialog\0siteConfigChanged\0"
    "\0updateDialog\0refreshSitesConfig\0"
    "browseForSitesConfig\0doApply\0"
    "checkApplyButtonState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SitesConfigDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SitesConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SitesConfigDialog *_t = static_cast<SitesConfigDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->siteConfigChanged(); break;
        case 1: _t->updateDialog(); break;
        case 2: _t->refreshSitesConfig(); break;
        case 3: _t->browseForSitesConfig(); break;
        case 4: _t->doApply(); break;
        case 5: _t->checkApplyButtonState(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SitesConfigDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SitesConfigDialog::siteConfigChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SitesConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SitesConfigDialog.data,
      qt_meta_data_SitesConfigDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SitesConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SitesConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SitesConfigDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SitesConfigDialog"))
        return static_cast< Ui::SitesConfigDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int SitesConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SitesConfigDialog::siteConfigChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE