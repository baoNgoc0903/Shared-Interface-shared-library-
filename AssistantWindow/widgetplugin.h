#ifndef WIDGETPLUGIN_H
#define WIDGETPLUGIN_H
#include <QObject>
#include <QLibrary>
#include <QDebug>
#include "LoveWidgetPlugin_global.h"
#include "LoveWidgetInterface.h"

typedef LoveWidgetInterface* (*GetObjectfunction)(int);
class WidgetPlugin : public QObject
{
    Q_OBJECT
public:
    WidgetPlugin();
    bool loadPlugin(){
        GetObjectfunction func = nullptr;
        mLib.setFileName("/home/zg0c/Build/LoveWidgetPlugin/libLoveWidgetPlugin");
        qDebug() << mLib.fileName();

        if(mLib.load()){
            qDebug() << "load success";
        }
        else{
           qDebug() << "load fail";
        }

        func = (GetObjectfunction) mLib.resolve("getObject");
        if(func){
            qDebug() << "function pointer success";
        }
        else{
           qDebug() << "function pointer fail";
        }
        mObject = (*func)(9);
        mObject->createMethodToCall();
        qDebug() << mObject->getData();
        mObject->setData(3);
        qDebug() << mObject->getData();
        return true;
    }
private:
    LoveWidgetInterface* mObject;
    QLibrary mLib;
};

#endif // WIDGETPLUGIN_H
