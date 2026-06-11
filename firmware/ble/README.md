# BLE Provisioning Module

## Objetivo

Permitir configuração inicial do ESP32-S3 sem cabo USB.

## Funcionalidades

* Descoberta BLE
* Recebimento de SSID
* Recebimento de senha WiFi
* Recebimento de Token
* Armazenamento em NVS
* Inicialização automática do WiFi

## Serviço BLE

Nome:

MSC-SETUP

UUID:

6E400001-B5A3-F393-E0A9-E50E24DCCA9E

## Characteristics

### WIFI_SSID

Recebe o nome da rede WiFi.

### WIFI_PASSWORD

Recebe a senha da rede WiFi.

### DEVICE_TOKEN

Recebe o token do dispositivo.

### DEVICE_STATUS

Retorna o estado atual do provisionamento.

## Fluxo

iPhone / Android
↓
BLE
↓
ESP32-S3
↓
NVS Storage
↓
WiFi Manager
↓
Cloud Registry

## Próximas Versões

* NimBLE-Arduino
* Pairing Seguro
* Criptografia
* OTA via BLE
* Device Discovery
