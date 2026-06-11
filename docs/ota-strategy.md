# OTA Strategy

## Objetivo

Permitir atualização remota de firmware sem necessidade de cabo USB.

## Fluxo OTA

GitHub
↓
GitHub Actions
↓
Build Firmware
↓
OTA Server
↓
ESP32-S3

## Etapas

1. Desenvolvedor realiza commit.
2. GitHub Actions gera firmware.
3. Firmware é publicado no OTA Server.
4. Dispositivo verifica nova versão.
5. Download seguro.
6. Validação.
7. Reinicialização.

## Requisitos

* WiFi ativo
* Firmware assinado
* Rollback automático
* Verificação de integridade

## Futuro

* OTA via BLE
* OTA diferencial
* Distribuição por grupos
* Marketplace de Skills
