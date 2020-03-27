// Sketch settings
//**************************************************
// Board
#define ES8266
//#define ESP32

// Connection
#define WIFI
//#define LORA

// Protocol
#define MQTT

// Probe
#define DS18B20

//**************************************************
float temp;

void setup() {  
    Serial.begin(115200);
    initialiseconn();
    initialiseproto();
    initialiseprobe();
}

void loop() {
    temp = readtemp();
    Serial.println(temp);  // Serial monitor debug print
    sendinfo(temp);
    delay(100);
}
