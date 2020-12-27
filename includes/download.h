#ifndef _DOWNLOAD_H_
#define _DOWNLOAD_H_

#define AMS_SIG_URL     "https://github.com/ITotalJustice/patches/releases/latest/download/fusee.zip"
#define HEKATE_SIG_URL  "https://github.com/ITotalJustice/patches/releases/latest/download/hekate.zip"
#define APP_URL         "https://github.com/PoloNX/IDC_Updater/releases/download/1.0.0/IDC_Updater.nro"
#define CFW_URL         ""
#define TEMP_FILE       "/switch/sigpatch-updater/temp"

#define ON              1
#define OFF             0


#include <stdbool.h>

//
bool downloadFile(const char *url, const char *output, int api);

#endif
