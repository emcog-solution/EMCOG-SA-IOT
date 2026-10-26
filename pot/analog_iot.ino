
#define BLYNK_TEMPLATE_ID "TMPL33pNmYb72"
#define BLYNK_TEMPLATE_NAME "analog"
#define BLYNK_AUTH_TOKEN "Pya8OxALPasStkK-QKlpjVcA01kxvaUH"

#define BLYNK_PRINT Serial
 
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] ="Realme";
char pass[] = "hotspotpassword";

BlynkTimer timer;

void setup() {
  // put your setup code here, to run once:
 // pinMode(26,ANALOG);
  pinMode(34, INPUT);
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
 // timer.setInterval(1000L, sendSensorData);

}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();  // Keep Blynk connected
  //timer.run();  // Run the timer to send data
  int potvalue = analogRead(34);  
  Serial.println(potvalue);
  Blynk.virtualWrite(V1,potvalue);
  delay(1000);
  //int potvalue=analogRead(26);
  //Blynk.virtualWrite(V1,potvalue);

}

/*
void sendSensorData() {
  int potvalue = analogRead(34);  // Read potentiometer value
  Blynk.virtualWrite(V1, potvalue);  // Send value to Blynk Virtual Pin V1
}
*/

