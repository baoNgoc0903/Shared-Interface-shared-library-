#ifndef LVWIDGETPLUGIN_H
#define LVWIDGETPLUGIN_H
#include <QObject>
#include "LoveWidgetInterface.h"
#include <QDebug>
class LVWidgetPlugin :public QObject, public LoveWidgetInterface
{
    Q_OBJECT
public:
    LVWidgetPlugin(int par=0);
    virtual void createMethodToCall(){
        qDebug() << "function from LVWidgetPlugin";
    }
    virtual void setData(int data){
        m_x = data;
    }
    virtual int getData(){
        return m_x;
    }
    static LVWidgetPlugin* getInstance(int par){
        if(instance ==nullptr){
            instance = new LVWidgetPlugin(par);
        }
        return instance;
    }
private:
    static LVWidgetPlugin* instance;
    int m_x;
};

#endif // LVWIDGETPLUGIN_H
