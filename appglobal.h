#ifndef APPGLOBAL_H
#define APPGLOBAL_H

#include <QObject>
#include <QString>
#include <QSettings>
#include <QDebug>


#define PI 3.1415926
#define _L(x) QString::fromLocal8Bit(x)

class AppGlobal
{
public:
    static void setAppSettings(QString category,QString key,QString value)
    {
        QSettings settings("./cardmaker.ini",QSettings::IniFormat);
        settings.beginGroup(category);
        settings.setValue(key,value);
        settings.endGroup();
    }

    static QString getAppSettings(QString category,QString key)
    {
        QSettings settings("./cardmaker.ini",QSettings::IniFormat);
        settings.beginGroup(category);
        QString value = settings.value(key,"<UNDEFINED>").toString();
        settings.endGroup();
        return value;
    }
};

#endif // APPGLOBAL_H
