#ifdef LORA

void initialiseproto(){
  Serial.println("Succesfully initialised.");
}

void sendinfo(float read_data){
  String data = String(senderID) + ": " + String(read_data);
  LoRa.beginPacket();
  LoRa.print((data).c_str());
  LoRa.endPacket();
}

#endif
