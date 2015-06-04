#include <AFMotor.h>

AF_DCMotor leftDrive(1);
AF_DCMotor rightDrive(3);

void setup() {
  Serial.begin(9600);
  leftDrive.run(RELEASE);
  rightDrive.run(RELEASE);
}

void loop() {
  driveForwardTime(5);
  driveStop();
  delay(500000);
}
