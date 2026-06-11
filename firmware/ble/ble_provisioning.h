// MSC Device OS - BLE Provisioning Header

#ifndef BLE_PROVISIONING_H
#define BLE_PROVISIONING_H

#include <Arduino.h>

class BLEProvisioning
{
public:

```
// Inicializa o modo BLE Provisioning
static void begin();

// Verifica se o dispositivo já foi provisionado
static bool isProvisioned();

// Salva credenciais recebidas via BLE
static void saveCredentials(
    const String& ssid,
    const String& password,
    const String& token
);

// Retorna SSID atual
static String getSSID();

// Retorna senha atual
static String getPassword();

// Retorna token atual
static String getToken();
```

private:

```
// Estado interno
static bool provisioned;

// Dados temporários
static String ssid;
static String password;
static String token;
```

};

#endif
