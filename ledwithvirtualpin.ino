#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID "TMPL3q9DvYnio"
#define BLYNK_TEMPLATE_NAME "sens O ros"
#define BLYNK_AUTH_TOKEN "1mtQwIz-S5Di8_Rn4GpaVqNeEbSS2kiV" 


#include <WiFi.h>         // Use <ESP8266WiFi.h> for ESP8266
#include <BlynkSimpleEsp32.h>  // or <BlynkSimpleEsp8266.h> for ESP8266

// WiFi credentials
char ssid[] = "Mk S21";
char pass[] = "alltoowell";

// Built-in LED pin
int ledPin = 2;  // GPIO2 is built-in LED on most ESP32/ESP8266 boards

// Virtual pin handler
BLYNK_WRITE(V0) {
  int ledState = param.asInt(); // Get value from Blynk app (0 or 1)
  digitalWrite(ledPin, ledState);
}

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
}
