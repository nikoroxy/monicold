/*
 *   CONNECTIONS
 */

// Wi-Fi
//***************************************************************
const char* ssid = "";            // Wi-Fi SSID
const char* wifi_password = "";   // Wi-Fi password

//LoRa
//***************************************************************
const long lora_frq = 915E6;      // LoRa Frequency (433E6, 866E6, 915E6)
const int csPin = 5;              // LoRa chip select
const int resetPin = 14;          // LoRa reset
const int irqPin = 2;             // LoRa interrupt

/*
 *  PROTOCOLS
 */

// MQTT
//***************************************************************
const char* mqtt_server = "";     // MQTT server address
const int   mqtt_port = 1883;     // MQTT server port
const char* mqtt_topic = "";      // MQTT desired topic
//const char* mqtt_username = ""; // MQTT username (uncomment if needed)
//const char* mqtt_password = ""; // MQTT Password (uncomment if needed)
const char* clientID = "";        // MQTT cliend ID

//LoRa
//***************************************************************
const char* senderID = "";         // LoRa sender ID

/*
 *  PROBES
 */
// Dallas DS18B20 (always remember 4k7 resistor between D+ and Vcc)
//***************************************************************
const int ds18b20_pin = 5; // D+ pin
