
const int buzzerPin = 21; // Pin donde se conecta la señal del buzzer
const int sensorPIR = 19; // Pin donde se conecta la salida del PIR

void setup() {
pinMode(buzzerPin, OUTPUT);
pinMode(sensorPIR, INPUT);
Serial.begin(115200);
Serial.println("Calabaza lista (sin ojos iluminados)");
}

void loop() {
int movimiento = digitalRead(sensorPIR);

if (movimiento == HIGH) {
Serial.println("¡Movimiento detectado!");

// Reproducir un patrón de sonido "terrorífico"
for (int i = 0; i < 3; i++) {
tone(buzzerPin, 900); // frecuencia en Hz
delay(200);
noTone(buzzerPin);
delay(200);
}
// Pausa para evitar retrigger inmediato
delay(2000);
}
}