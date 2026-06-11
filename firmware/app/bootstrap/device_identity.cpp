// MSC Device OS - Device Identity Implementation

#include "device_identity.h"
#include "../config/device_config.h"

#include <ArduinoJson.h>
#include <WiFi.h>

String DeviceIdentity::getDeviceId()
{
    uint64_t chipid = ESP.getEfuseMac();

    char id[32];

    sprintf(
        id,
        "MSC-%04X%08X",
        (uint16_t)(chipid >> 32),
        (uint32_t)chipid
    );

    return String(id);
}

String DeviceIdentity::getFirmwareVersion()
{
    return MSC_FIRMWARE_VERSION;
}

String DeviceIdentity::getBoardName()
{
    return "ESP32-S3";
}

std::vector<String> DeviceIdentity::getCapabilities()
{
    return {
        "ble",
        "wifi",
        "ota"
    };
}

String DeviceIdentity::toJson()
{
    JsonDocument doc;

    doc["deviceId"] = getDeviceId();
    doc["firmware"] = getFirmwareVersion();
    doc["board"] = getBoardName();

    JsonArray caps = doc["capabilities"].to<JsonArray>();

    for (const auto& cap : getCapabilities())
    {
        caps.add(cap);
    }

    String output;

    serializeJsonPretty(
        doc,
        output
    );

    return output;
}