#include <AS5600.h>

rath::AS5600 sensor;

void setup() {
  Serial.begin(115200);

  sensor.init();

  Serial.println("Ready");
}

void loop() {
  double angle = sensor.get();
  Serial.print("angle (rad): ");
  Serial.print(angle, 3);
  
  Serial.print("\t");
  
  double angle_deg = sensor.getDegree();
  Serial.print("angle (deg): ");
  Serial.print(angle_deg, 2);
  
  Serial.println("");

  delay(10);
}