// MSC Device OS - BLE Provisioning Header

#ifndef BLE_PROVISIONING_H
#define BLE_PROVISIONING_H

#include <Arduino.h>

class BLEProvisioning
{
public:
    static void begin();

    static bool isProvisioned();

    static String getSSID();

    static String getPassword();

    static String getToken();

private:
    static bool provisioned;

    static String ssid;
    static String password;
    static String token;
};

#endif