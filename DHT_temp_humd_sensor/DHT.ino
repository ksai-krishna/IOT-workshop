#include<DHT.h>
#define DHTPIN 8
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);
void setup()
{
  Serial.begin(9600);
  Serial.println("DHT11 Test");
  dht.begin();
}
void loop()
{
  float h=dht.readHumidity();
  float t=dht.readTemperature();
  Serial.print("Humidity:");
  Serial.print(h);
  Serial.print("%\t");
  Serial.print("Temperature:");
  Serial.print(t);
  Serial.println("*C");
  delay(1 ,00);
}
