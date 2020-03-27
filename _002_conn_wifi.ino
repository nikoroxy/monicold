#ifdef WIFI

#ifdef ESP8266
#include <ESP8266WiFi.h>
WiFiClient connclient;
#endif

#ifdef ESP32
#include <ESP8266WiFi.h>
WiFiClient connclient;
#endif


void initialiseconn(){
  Serial.println("Connection: Wi-Fi");
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, wifi_password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}
#endif
