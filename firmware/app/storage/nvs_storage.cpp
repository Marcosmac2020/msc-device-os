// MSC Device OS - NVS Storage Runtime

#include "nvs_storage.h"

#include <Preferences.h>

static Preferences prefs;

bool NVSStorage::begin()
{
    return prefs.begin("msc-device", false);
}

bool NVSStorage::saveSSID(const String& ssid)
{
    prefs.putString("ssid", ssid);
    return true;
}

bool NVSStorage::savePassword(const String& password)
{
    prefs.putString("password", password);
    return true;
}

bool NVSStorage::saveToken(const String& token)
{
    prefs.putString("token", token);
    return true;
}

String NVSStorage::getSSID()
{
    return prefs.getString("ssid", "");
}

String NVSStorage::getPassword()
{
    return prefs.getString("password", "");
}

String NVSStorage::getToken()
{
    return prefs.getString("token", "");
}

bool NVSStorage::isProvisioned()
{
    return getSSID().length() > 0;
}

void NVSStorage::clear()
{
    prefs.clear();
}