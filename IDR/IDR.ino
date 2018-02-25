
void setup() {
Serial.begin(9600);  // start serial port at 9600 bps:
}

void loop() {
  double value =analogRead(A0);
  Serial.println(value);
  delay(200);
}
      
