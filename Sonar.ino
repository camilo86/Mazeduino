long duration, distance;

// Return distance in CMs
long getSonar() {
  digitalWrite(sonarTrig, LOW);
  delayMicroseconds(2);
  digitalWrite(sonarTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(sonarTrig, HIGH);
  
  duration = pulseIn(sonarEcho, HIGH);
  distance = (duration/2)/29.1;
  return distance;
}
