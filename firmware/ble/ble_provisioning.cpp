// MSC Device OS - BLE Provisioning Runtime

#include "ble_provisioning.h"

#include "../storage/nvs_storage.h"

bool BLEProvisioning::provisioned = false;

String BLEProvisioning::ssid = "";
String BLEProvisioning::password = "";
String BLEProvisioning::token = "";

void BLEProvisioning::begin()
{
Serial.println();
Serial.println("==================================");
Serial.println(" MSC Device OS");
Serial.println(" BLE Provisioning Started");
Serial.println("==================================");

```
Serial.println("Advertising BLE Service:");
Serial.println("MSC-SETUP");

/*
    Próxima implementação:

    NimBLEDevice::init("MSC-SETUP");

    Service:
    MSC_SETUP_SERVICE

    Characteristics:
    WIFI_SSID
    WIFI_PASSWORD
    DEVICE_TOKEN
    DEVICE_STATUS

    Receber credenciais do App
    Salvar em NVS
    Conectar WiFi
*/
```

}

bool BLEProvisioning::isProvisioned()
{
return provisioned;
}

void BLEProvisioning::saveCredentials(
const String& ssid,
const String& password,
const String& token)
{
NVSStorage::begin();

```
NVSStorage::saveSSID(ssid);

NVSStorage::savePassword(password);

NVSStorage::saveToken(token);

Serial.println();
Serial.println("Credentials stored.");

delay(1000);

ESP.restart();
```

}

String BLEProvisioning::getSSID()
{
return ssid;
}

String BLEProvisioning::getPassword()
{
return password;
}

String BLEProvisioning::getToken()
{
return token;
}
