
int CC[]={122,134,146,159,170,181,192,202,211,219,226,232,237,240,242,243,243,242,239,235,229,223,216,207,198,188,177,165,153,141,129,116,104,91,80,68,57,47,37,29,21,14,9,5,2,0,0,0,2,6,10,16,23,31,40,49,60,71,83,95,107,119};


void setup() {
    Serial.begin(74880);

  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

}

int value = 0;
void loop() {
  if (value > 60)
    value = 0;
  toBinary8 ( CC[value]);
    Serial.println(analogRead(A0));
  value++;
  delayMicroseconds(62);
}

void toBinary8 (int num) {
  digitalWrite(6, CC[value]&B00000001);
  digitalWrite(7, CC[value]&B00000010);
  digitalWrite(8, CC[value]&B00000100);
  digitalWrite(9, CC[value]&B00001000);
  digitalWrite(10, CC[value]&B00010000);
  digitalWrite(11, CC[value]&B00100000);
  digitalWrite(12, CC[value]&B01000000);
  digitalWrite(13, CC[value]&B10000000);
}

