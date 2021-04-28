#ifndef LOVEWIDGETInTERFACE_H
#define LOVEWIDGETInTERFACE_H
#include "LoveWidgetPlugin_global.h"
class LoveWidgetInterface;
extern "C" LOVEWIDGETPLUGIN_EXPORT LoveWidgetInterface* getObject(int par = 0);
class LoveWidgetInterface
{
public:
    LoveWidgetInterface(){}
    virtual void createMethodToCall() = 0;
    virtual void setData(int data) = 0;
    virtual int getData() = 0;
};

#endif // LOVEWIDGETInTERFACE_H
