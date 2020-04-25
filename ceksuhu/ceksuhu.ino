#include <DHT.h>
#define dhtPin 15
#define dhtType DHT11

DHT dht(dhtPin, dhtType);
void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(1000);
  float celcius = dht.readTemperature();
  Serial.print("Temperature : ");
  Serial.print(celcius);
  Serial.println();
}
