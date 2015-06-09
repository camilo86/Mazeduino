#include <AFMotor.h>

#define sonarTrig 8
#define sonarEcho 7

AF_DCMotor leftDrive(1);
AF_DCMotor rightDrive(3);

void setup() {
  Serial.begin(9600);
  // Stops motor when arduino starts
  leftDrive.run(RELEASE);
  rightDrive.run(RELEASE);
  
  // Setup needed for sonar
  pinMode(sonarTrig, OUTPUT);
  pinMode(sonarEcho, INPUT);
}

void loop() {
  Serial.println(getSonar());
}
