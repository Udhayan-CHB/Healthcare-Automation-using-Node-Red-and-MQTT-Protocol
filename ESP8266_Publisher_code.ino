#include <ESP8266WiFi.h>
#include <PubSubClient.h>
// MQTT configuration
const char* mqtt_server = "raspberrypi";
WiFiClient espClient;
PubSubClient client(espClient);
void setup() {
  // Connect to WiFi and MQTT broker
  client.setServer(mqtt_server, 1883);
}
void loop() {
  // Read sensor and publish
  int sensorValue = analogRead(A0);
  client.publish("sensors/environment/voc", String(sensorValue).c_str());
  delay(1000);
}
