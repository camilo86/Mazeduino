#include <AFMotor.h>

#define sonarTrig 8
#define sonarEcho 7

// Sonar array
const int numReadings = 10;
int sonarReadings[numReadings];
int sonarIndex = 0;
int sonarTotal = 0;
int sonarAverage = 0;

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
  
  // Initilizes values to zeros
  for(int i = 0; i < numReadings; i++) {
    sonarReadings[i] = 0;
  }
}

void loop() {
  // moving average for sonar readings
  sonarTotal = sonarTotal - sonarReadings[sonarIndex];
  sonarReadings[sonarIndex] = getRawSonar();
  sonarTotal = sonarTotal + sonarReadings[sonarIndex];
  sonarIndex = sonarIndex + 1;
  if(sonarIndex > numReadings)
    sonarIndex = 0;
    
  sonarAverage = sonarTotal/numReadings;
  Serial.println(sonarAverage);
}
