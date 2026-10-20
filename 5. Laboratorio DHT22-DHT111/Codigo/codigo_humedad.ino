#include "DHT.h" // Importar librería

int SENSOR = 2; // Pin de datos
DHT dht(SENSOR, DHT22); // Crear objeto DHT

void setup() {
  Serial.begin(9600); // Iniciar monitor serial
  dht.begin(); // Iniciar sensor
}

void loop() {
  float t = dht.readTemperature(); // Leer temperatura
  float h = dht.readHumidity(); // Leer humedad

  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.print(" C Humedad: ");
  Serial.print(h);
  Serial.println(" %");

  delay(2000); // Pausa recomendada para el sensor
}