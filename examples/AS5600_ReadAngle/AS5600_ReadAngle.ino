#include <AS5600.h>

rath::AS5600 sensor;

void setup() {
  Serial.begin(115200);

  sensor.init();

  Serial.println("ready");
}

void loop() {
  double angle = sensor.get();
  Serial.print("angle (rad): ");
  Serial.print(angle, 3);
  
  Serial.print("\t");
  
  double angle_normalized = sensor.getNormalized();
  Serial.print("angle (normalized): ");
  Serial.print(angle_normalized, 3);
  
  Serial.println("");

  delay(10);
}