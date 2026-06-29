
const int pirPin = 7;      // Der GPIO-Pin, an den du OUT angeschlossen hast
int sensorState = LOW;      // Speichert den aktuellen Status des Sensors
int val = 0;                // Variable zum Auslesen des Pins

void setup() {
  pinMode(pirPin, INPUT);   // Definiert den Sensor-Pin als Eingang
  Serial.begin(115200);     // Startet die serielle Kommunikation (Wichtig: 115200 Baudrate)
  
  delay(2000);              // Kurze Pause (2 Sekunden), damit der Sensor initialisieren kann
  Serial.println("System bereit. Warte auf Bewegung...");
}

void loop() {
  val = digitalRead(pirPin); // Liest den Status des Sensors aus

  if (val == HIGH) {
    if (sensorState == LOW) {
      // Es wurde gerade eine Bewegung erkannt
      Serial.println("1");  
      sensorState = HIGH;
    }
  } else {
    if (sensorState == HIGH) {
      // Die Bewegung hat wieder aufgehört
      Serial.println("0");  
      sensorState = LOW;
    }
  }
  delay(50); // Kurze Pause zur Stabilisierung des Signals
}