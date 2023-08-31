#ifndef WIDGETDLL_GLOBAL_H
#define WIDGETDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(WIDGETDLL_LIBRARY)
#  define WIDGETDLL_EXPORT Q_DECL_EXPORT
#else
#  define WIDGETDLL_EXPORT Q_DECL_IMPORT
#endif

#endif // WIDGETDLL_GLOBAL_H
