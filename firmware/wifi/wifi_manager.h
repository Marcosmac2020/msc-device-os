// MSC Device OS - WiFi Manager Header

#ifndef WIFI_MANAGER_H
#define WIFI_MANAGER_H

#include <Arduino.h>

class WiFiManagerMSC
{
public:
    static bool connect();

    static bool isConnected();

    static String getIPAddress();

    static int getRSSI();
};

#endif