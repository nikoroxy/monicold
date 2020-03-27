#ifdef MQTT
#include <PubSubClient.h>

PubSubClient protoclient(mqtt_server, mqtt_port, connclient);

#ifdef mqtt_username

void initialiseproto(){
  
  if (protoclient.connect(clientID, mqtt_username, mqtt_password)) {
    Serial.println("Connected to MQTT Broker with credentials!");
  }
  else {
    Serial.println("Connection to MQTT Broker failed...");
  }
}

#else

void initialiseproto(){
  
  if (protoclient.connect(clientID)) {
    Serial.println("Connected to MQTT Broker anonymously!");
  }
  else {
    Serial.println("Connection to MQTT Broker failed...");
  }
}

#endif

void sendinfo(float read_data){
  String data = String(clientID) + ": " + String(read_data);
  protoclient.publish(mqtt_topic, String(data).c_str());
}

#endif
