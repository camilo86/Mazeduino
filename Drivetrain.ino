void driveForwardTime(double timeSeconds) {
  leftDrive.run(FORWARD);
  leftDrive.run(FORWARD);
  leftDrive.setSpeed(255);
  leftDrive.setSpeed(255);
  delay(timeSeconds * 1000.0);
  leftDrive.setSpeed(0);
  rightDrive.setSpeed(0);
}
void driveBackwardTime(double timeSeconds) {
  leftDrive.run(BACKWARD);
  leftDrive.run(BACKWARD);
  leftDrive.setSpeed(255);
  leftDrive.setSpeed(255);
  delay(timeSeconds * 1000.0);
  leftDrive.setSpeed(0);
  rightDrive.setSpeed(0);
}

void driveForward() {
  leftDrive.run(FORWARD);
  rightDrive.run(FORWARD);
  leftDrive.setSpeed(255);
  rightDrive.setSpeed(255);
}

void driveBackward() {
  leftDrive.run(BACKWARD);
  rightDrive.run(BACKWARD);
  leftDrive.setSpeed(255);
  rightDrive.setSpeed(255);
}

void driveStop() {
  leftDrive.run(RELEASE);
  rightDrive.run(RELEASE);
}
