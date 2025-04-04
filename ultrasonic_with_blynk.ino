#define BLYNK_TEMPLATE_ID "TMPL3q9DvYnio"
#define BLYNK_TEMPLATE_NAME "sens O ros"
#define BLYNK_AUTH_TOKEN "1mtQwIz-S5Di8_Rn4GpaVqNeEbSS2kiV" 


#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Mk S21";
char pass[] = "alltoowell"; 
// Ultrasonic Sensor Pins
#define TRIG_PIN 13
#define ECHO_PIN 12

void setup() {
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  Blynk.run();

  // Read distance
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);
  float distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  Blynk.virtualWrite(V3, distance);  // Send distance to Blynk (V2)

  delay(1000);  // Wait 1 second
}
