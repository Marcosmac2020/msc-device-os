// MSC Device OS - WiFi Manager Runtime

#include "wifi_manager.h"
#include "../storage/nvs_storage.h"

#include <WiFi.h>

bool WiFiManagerMSC::connect()
{
    String ssid = NVSStorage::getSSID();
    String password = NVSStorage::getPassword();

    if (ssid.isEmpty())
    {
        Serial.println("No WiFi credentials found.");
        return false;
    }

    Serial.println();
    Serial.println("Connecting to WiFi...");
    Serial.println(ssid);

    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid.c_str(), password.c_str());

    uint32_t timeout = millis();

    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);

        Serial.print(".");

        if (millis() - timeout > 15000)
        {
            Serial.println();
            Serial.println("Connection timeout.");
            return false;
        }
    }

    Serial.println();
    Serial.println("WiFi Connected.");
    Serial.println(WiFi.localIP());

    return true;
}

bool WiFiManagerMSC::isConnected()
{
    return WiFi.status() == WL_CONNECTED;
}

String WiFiManagerMSC::getIPAddress()
{
    return WiFi.localIP().toString();
}

int WiFiManagerMSC::getRSSI()
{
    return WiFi.RSSI();
}