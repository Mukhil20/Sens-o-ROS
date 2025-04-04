
#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID "TMPL3q9DvYnio"
#define BLYNK_TEMPLATE_NAME "sens O ros"
#define BLYNK_AUTH_TOKEN "1mtQwIz-S5Di8_Rn4GpaVqNeEbSS2kiV" 

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Mk S21";
char pass[] = "alltoowell";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
}

