#ifdef LORA

#include <SPI.h>
#include <LoRa.h>

void initialiseconn(){
  Serial.println("Connection: LoRa");
  
  LoRa.setPins(csPin, resetPin, irqPin);
  if (!LoRa.begin(lora_frq)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
}

#endif
