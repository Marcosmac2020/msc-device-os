// MSC Device OS - Main Bootstrap

#include <Arduino.h>

#include "../bootstrap/device_identity.h"
#include "../storage/nvs_storage.h"
#include "../wifi/wifi_manager.h"
#include "../ble/ble_provisioning.h"

void setup()
{
    Serial.begin(115200);

    delay(2000);

    Serial.println();
    Serial.println("======================");
    Serial.println(" MSC Device OS");
    Serial.println("======================");

    Serial.println(
        DeviceIdentity::toJson()
    );

    NVSStorage::begin();

    if (!NVSStorage::isProvisioned())
    {
        Serial.println();
        Serial.println(
            "Provisioning Mode"
        );

        BLEProvisioning::begin();

        return;
    }

    Serial.println();
    Serial.println(
        "Provisioned Device"
    );

    WiFiManagerMSC::connect();
}

void loop()
{
}