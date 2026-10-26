// #define BLYNK_TEMPLATE_ID "TMPL3Tw7uqZAp"
// #define BLYNK_TEMPLATE_NAME "led"
// #define BLYNK_AUTH_TOKEN "yQalxmM5dc4KQ983ObRA9vE3dcJphoxv"

#define BLYNK_TEMPLATE_ID "TMPL3yyjM7TJh"
#define BLYNK_TEMPLATE_NAME "slider"
#define BLYNK_AUTH_TOKEN "BtdmpEf8aGyMyBuGcX4uHTK6_c2_LFSs"

#define LED_PIN 2
#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Jai";
char pass[] = "54320000";
// char ssid[] = "Airtel_sada_6154";
// char pass[] = "air61849";
// char ssid[] = "Wokwi-GUEST";
// char pass[] = "";


BLYNK_WRITE(V0) {
  int value = param.asInt();   // 1 or 0

  if (value == 1) {
    digitalWrite(LED_PIN, HIGH);   // LED ON
  } else {
    digitalWrite(LED_PIN, LOW);  // LED OFF
  }
}

BLYNK_WRITE(V1) {
  int value = param.asInt();   // 1 or 0

  if (value == 1) {
    digitalWrite(LED_PIN, HIGH);   // LED ON
  } else {
    digitalWrite(LED_PIN, LOW);  // LED OFF
  }
}

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH); // LED OFF initially
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}