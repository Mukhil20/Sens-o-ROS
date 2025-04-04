
#define BLYNK_TEMPLATE_ID "TMPL3q9DvYnio"
#define BLYNK_TEMPLATE_NAME "sens O ros"
#define BLYNK_AUTH_TOKEN "1mtQwIz-S5Di8_Rn4GpaVqNeEbSS2kiV" 

#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <ESP32Servo.h>

char auth[] = BLYNK_AUTH_TOKEN; // Blynk authentication token
char ssid[] = "Mk S21";
char pass[] = "alltoowell"; // Your WiFi password

Servo servo1;


void setup()
{
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  servo1.attach(5); 
  
}

void loop()
{
  Blynk.run();
}

BLYNK_WRITE(V1) // Slider Widget for Servo 1 on V0
{
  int pos1 = param.asInt(); // Get value from slider
  servo1.write(pos1); // Set servo 1 position
  Blynk.virtualWrite(V2, pos1);
}
