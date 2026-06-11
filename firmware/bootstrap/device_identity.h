#ifndef DEVICE_IDENTITY_H
#define DEVICE_IDENTITY_H

#include <Arduino.h>
#include <vector>

class DeviceIdentity {
public:
    static String getDeviceId();
    static String getFirmwareVersion();
    static String getBoardName();

    static std::vector<String> getCapabilities();

    static String toJson();
};

#endif