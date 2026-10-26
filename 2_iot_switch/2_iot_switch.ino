#define BLYNK_TEMPLATE_ID "TMPL3SM7p1fCB"
#define BLYNK_TEMPLATE_NAME "BLYNK"
#define BLYNK_AUTH_TOKEN "p97Xf0qOFhNUjZ_7DDHcfjglrv_TIuoT"
#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

#define BUTTON_PIN 4

char auth[] = BLYNK_AUTH_TOKEN;//"YOUR_BLYNK_AUTH_TOKEN";
char ssid[] = "Airtel_sada_6154";
char pass[] = "air61849";

void setup() {
  Serial.begin(9600);

  pinMode(BUTTON_PIN, INPUT); 

  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();

  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == LOW) {        
    Blynk.virtualWrite(V0, 255);   
  } else {
    Blynk.virtualWrite(V0, 0);     
  }

  delay(100); // small delay to reduce network spam
}