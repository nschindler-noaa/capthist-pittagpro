#ifndef PPSystemSettings_h
#define PPSystemSettings_h

#include <QStringList>
#include <QVector>
#include <QVariant>

#include <CbrSettings.h>

class PPSystemSettings : public CbrSettings {
public:

    enum SettingKey {
        AltSitesConfig = 0,
        AppDataPath,
        ConfigFile,
        DataDir,
        EstPrecision,
        ErrPrecision,
        LastDir,
        OneTableCjs,
        Prefix,
        ShowLambda,
        ShowTrackerDetails,
        SitesConfigFile,
        TrackedPits,
        Version,
        NumKeys
    };

    static PPSystemSettings& getInstance();

    void saveDir(SettingKey key, const QString& path);
    QString getDir(SettingKey key) const;
    
    void resolveSitesConfig();
    QString getSitesConfig() const;

private:
    PPSystemSettings();

};

#endif
