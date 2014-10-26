#ifndef VERSION_H
#define VERSION_H

#define SCANTOOL_VERSION          1
#define SCANTOOL_SUB_VERSION      15
#define SCANTOOL_WIP_VERSION      0
#define SCANTOOL_VERSION_STR      "1.15"
#define SCANTOOL_VERSION_EX_STR   "1.15"
#define SCANTOOL_YEAR_STR         "2009"
#define SCANTOOL_DATE             20090915    /* yyyymmdd */

#ifdef ALLEGRO_WINDOWS
   #define SCANTOOL_PLATFORM_STR   "Windows"
#else
   #define SCANTOOL_PLATFORM_STR   "DOS"
#endif

#define SCANTOOL_COPYRIGHT_STR     "Copyright � " SCANTOOL_YEAR_STR " ScanTool.net, LLC"

#endif
