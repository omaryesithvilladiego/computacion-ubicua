# Laboratorio 1 - LED Pin 13

## Código

```cpp
#include <LiquidCrystal.h> // Incluir librería del LCD [10]

LiquidCrystal lcd(7, 6, 5, 4, 3, 2); // Pines RS, E, D4, D5, D6, D7 [10]

float suma; // Variable para almacenar la suma de lecturas [4]

void setup() {
  lcd.begin(16, 2); // Inicializar LCD 16x2 [10]
}

void loop() {
  suma = 0; // Reiniciar suma al inicio del ciclo [4]

  for (int i = 0; i < 5; i++) { // Tomar 5 muestras [14]
    int sensor = analogRead(A0); // Leer entrada analógica [8]
    float temperatura = (sensor * 5000.0 / 1023.0) / 10.0; // Fórmula de conversión [17]
    suma = suma + temperatura; // Acumular lecturas [14]
    delay(500); // Pausa de medio segundo entre muestras [18]
  }

  float promedio = suma / 5.0; // Calcular promedio [18]

  lcd.setCursor(0, 0); // Ubicar cursor en primera línea [6]
  lcd.print("Temp: ");
  lcd.print(promedio, 1); // Mostrar promedio con 1 decimal [6]
  lcd.print(" C");
}
