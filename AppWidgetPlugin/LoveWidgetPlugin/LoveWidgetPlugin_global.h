#ifndef LOVEWIDGETPLUGIN_GLOBAL_H
#define LOVEWIDGETPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>
//#include "LoveWidgetInterface.h"
#if defined(LOVEWIDGETPLUGIN_LIBRARY)
#  define LOVEWIDGETPLUGIN_EXPORT Q_DECL_EXPORT
#else
#  define LOVEWIDGETPLUGIN_EXPORT Q_DECL_IMPORT
#endif

//extern "C" LOVEWIDGETPLUGIN_EXPORT LoveWidgetInterface* getObject(int par = 0);
#endif // LOVEWIDGETPLUGIN_GLOBAL_H
