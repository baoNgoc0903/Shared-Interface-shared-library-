#include "lvwidgetplugin.h"
LVWidgetPlugin* LVWidgetPlugin::instance= nullptr;
LVWidgetPlugin::LVWidgetPlugin(int par)
{
    m_x = par;
}

LoveWidgetInterface* getObject(int par){
    return LVWidgetPlugin::getInstance(par);
}
