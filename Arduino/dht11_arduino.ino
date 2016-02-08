#include "DHT.h"

#define PINDHT 4
#define DHTTYPE DHT11 
DHT dht(PINDHT, DHTTYPE);

void setup() {  
  Serial.begin(9600);
  dht.begin();
}

void loop() {  
  int humedad = dht.readHumidity();
  int temperatura = dht.readTemperature();

  Serial.print("Humedad Relativa: ");                 
  Serial.print(humedad);
  Serial.println("%");                     
  delay (1000);

  Serial.print("Temperatura: ");                  
  Serial.print(temperatura);
  Serial.println("ºC");                   
  delay (1000);
}
