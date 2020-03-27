# monicold 🌡️

Just a simple broadcaster for my temperature monitor project.


## 1. Summary 
Boards suppported: 
- ESP8266
- ESP32

Protocols supported: 
- MQTT protocol (via WiFi)
- LoRa

Probes supported:
- Dallas DS18B20

## 2. Use

1. Fill variables file and uncomment definitions in main file as your needs
2. Compile and flash

### 🕮 Libraries needed 
Boards:
- Wifi.h for ESP32
- ESP8266WiFi.h for ESP8266

Protocols:
- PubSubClient.h for MQTT
- SPI.h and LoRa.h for LoRa

Probes:
- OneWire.h and DallasTemperature.h for DS18B20 probe
