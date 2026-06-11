# MSC Device Protocol

## Device Identity

```json
{
  "deviceId":"MSC-0001",
  "type":"sensor",
  "firmware":"0.1.0",
  "capabilities":[
    "ble",
    "wifi",
    "ota"
  ]
}
```

## BLE Service

Service UUID:

MSC_SETUP_SERVICE

## Provisioning Payload

```json
{
  "ssid":"wifi",
  "password":"12345678",
  "token":"abc123"
}
```

## Device Registration

```json
{
  "deviceId":"MSC-0001",
  "firmware":"0.1.0",
  "mac":"AA:BB:CC:DD:EE:FF"
}
```

## Telemetry Schema

```json
{
  "deviceId":"MSC-0001",
  "battery":92,
  "rssi":-58,
  "uptime":3600
}
```
