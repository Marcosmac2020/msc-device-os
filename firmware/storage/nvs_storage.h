// MSC Device OS - NVS Storage Header

#ifndef NVS_STORAGE_H
#define NVS_STORAGE_H

#include <Arduino.h>

class NVSStorage
{
public:
    static bool begin();

    static bool saveSSID(const String& ssid);

    static bool savePassword(const String& password);

    static bool saveToken(const String& token);

    static String getSSID();

    static String getPassword();

    static String getToken();

    static bool isProvisioned();

    static void clear();
};

#endif