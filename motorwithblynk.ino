#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPL3PYsA5gfz"
#define BLYNK_TEMPLATE_NAME "workshop"
#define BLYNK_AUTH_TOKEN "IlzZ5gOPbgxk2IZDnUtOH47RRBldoc0x"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Mk S21";  // Your WiFi SSID
char pass[] = "alltoowell";  // Your WiFi Password

// Motor control pins
int M1F = 2;  // Motor 1 Forward
int M1R = 4;  // Motor 1 Reverse
int M2F = 12; // Motor 2 Forward
int M2R = 13; // Motor 2 Reverse

void setup() {
    pinMode(M1F, OUTPUT);
    pinMode(M1R, OUTPUT);
    pinMode(M2F, OUTPUT);
    pinMode(M2R, OUTPUT);

    Serial.begin(9600);
    Blynk.begin(auth, ssid, pass);
}

// Function triggered when Virtual Pin V1 changes in Blynk
BLYNK_WRITE(V1) {
    int switchState = param.asInt();  // Read value from Blynk (1 = ON, 0 = OFF)

    if (switchState == 1) {  
        digitalWrite(M1F, HIGH);
        digitalWrite(M2F, HIGH);
        Serial.println("Motors ON");
    } else {  
        digitalWrite(M1F, LOW);
        digitalWrite(M2F, LOW);
        Serial.println("Motors OFF");
    }
}

void loop() {
    Blynk.run();
}
