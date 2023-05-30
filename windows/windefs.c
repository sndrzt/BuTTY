/*
 * windefs.c: default settings that are specific to Windows.
 */

#include "putty.h"

#include <commctrl.h>

FontSpec *platform_default_fontspec(const char *name)
{
    if (!strcmp(name, "Font"))
        return fontspec_new("Courier New", false, 8, ANSI_CHARSET);
    else
        return fontspec_new("", false, 0, 0);
}

Filename *platform_default_filename(const char *name)
{
    if (!strcmp(name, "LogFileName"))
        return filename_from_str("putty-&H-&Y&M&D-&T.log");
    else if (!strcmp(name, "PublicKeyFile")) {
        char strBuffer[256] ={0};
        DWORD dwSize = 256;
        GetUserName(strBuffer, &dwSize);
        char s[MAX_PATH] = {0};
        sprintf(s, "C:\\Users\\%s\\.ssh\\id_rsa.ppk", strBuffer);

        return filename_from_str(s);
	}
    else
        return filename_from_str("");
}

char *platform_default_s(const char *name)
{
    if (!strcmp(name, "SerialLine"))
        return dupstr("COM3");
    return NULL;
}

bool platform_default_b(const char *name, bool def)
{
    return def;
}

int platform_default_i(const char *name, int def)
{
    return def;
}
