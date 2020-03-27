#ifdef DS18B20
#include <OneWire.h>
#include <DallasTemperature.h>

OneWire oneWire(ds18b20_pin);
DallasTemperature sensors(&oneWire);

void initialiseprobe() {
  sensors.begin();
}


float readtemp() {
  sensors.requestTemperatures();
  return sensors.getTempCByIndex(0);
}

#endif
