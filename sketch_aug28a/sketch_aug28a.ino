
#include <AFMotor.h>

AF_DCMotor Motor1(1);
AF_DCMotor Motor2(2);

void setup() {
  Motor1.setSpeed(127);
  Motor2.setSpeed(127);
}

void loop() {
Motor1.run(FORWARD);
Motor2.run(FORWARD);
}
