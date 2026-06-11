<!-- docs/device-lifecycle.md -->

# MSC Device OS - Device Lifecycle

## Fluxo Operacional

Power On
↓
Device Identity
↓
NVS Storage
↓
Possui Credenciais WiFi?
↓
├── NÃO
│      ↓
│  BLE Provisioning
│      ↓
│  Recebe:
│      - SSID
│      - Password
│      - Token
│      ↓
│  Salva em NVS
│      ↓
│  Reinicia
│
└── SIM
↓
WiFi Manager
↓
WiFi Connected
↓
Cloud Registry
↓
OTA Check
↓
Telemetry Loop
↓
Device Fleet Manager

## Resumo

BOOT
↓
Device Identity
↓
BLE Provisioning (se necessário)
↓
WiFi Connection
↓
Cloud Registration
↓
OTA Check
↓
Telemetry Loop

## Objetivo

Permitir que o dispositivo seja configurado apenas uma vez via BLE e,
a partir desse momento, opere de forma autônoma através de WiFi,
OTA e gerenciamento remoto.

## Futuro

* OTA via BLE
* Edge AI Runtime
* Device Discovery
* Skill Marketplace
* Fleet Orchestration
