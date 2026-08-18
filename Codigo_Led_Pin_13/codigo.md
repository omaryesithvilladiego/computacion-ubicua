
const int pinLed = 13;
const int tiempoEncendido = 1000;
const int tiempoApagado = 700;

void setup() {
  pinMode(pinLed, OUTPUT);
  digitalWrite(pinLed, LOW);
}

void loop() {
  cambiarEstadoLed(HIGH, tiempoEncendido);
  cambiarEstadoLed(LOW, tiempoApagado);
}

void cambiarEstadoLed(int estado, int tiempo) {
  digitalWrite(pinLed, estado);
  delay(tiempo);
}