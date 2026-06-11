# BLE Provisioning Module

## Objetivo

Permitir configuração inicial do dispositivo sem cabo USB.

## Dados Recebidos

* SSID
* Password
* Token

## Fluxo

1. ESP inicia BLE.
2. Aplicativo encontra dispositivo.
3. Credenciais são enviadas.
4. Dados são gravados em NVS.
5. ESP conecta ao Wi-Fi.
6. BLE é encerrado.

## Próxima Versão

* Criptografia
* Pairing seguro
* OTA via BLE


