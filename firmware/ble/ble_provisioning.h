#ifndef BLE_PROVISIONING_H
#define BLE_PROVISIONING_H

#include <Arduino.h>

class BLEProvisioning
{
public:
    static void begin();

    static bool isProvisioned();

    static String getSSID();

    static String getToken();
};

#endif