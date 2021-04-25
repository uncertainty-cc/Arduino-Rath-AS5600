#include <AS5600.h>

rath::AS5600 sensor;

void setup() {
  Serial.begin(115200);

  sensor.init();

  Serial.println("Ready");

  double angle = sensor.get();
  Serial.print("current position: ");
  Serial.println(angle, 3);

  Serial.print("Set to zero in: ");
  Serial.print("3...");
  delay(1000);
  Serial.print("2...");
  delay(1000);
  Serial.print("1...");
  delay(1000);
  Serial.println("");

  sensor.set(0);
  Serial.print("Sensor position set to zero. Now should output the value with offset.");
}

void loop() {
  double angle = sensor.get();
  Serial.print("angle (rad): ");
  Serial.print(angle, 3);
  Serial.println("");

  delay(10);
}