int CC[]={122,137,152,166,180,193,205,216,225,232,238,241,243,243,241,238,232,225,216,205,193,180,166,152,137,121,106,91,77,63,50,38,27,18,11,5,2,0,0,2,5,11,18,27,38,50,63,77,91,106};
void setup() {
  Serial.begin(9600);

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
  value++;
  if (value >= sizeof(CC))
    value = 0;
  toBinary8 ( CC[value]);
  Serial.println(analogRead(A0));
   delayMicroseconds(10);
}

void toBinary8 (int num) {
  byte a = num % 2;
  byte b = num / 2 % 2;
  byte c = num / 4 % 2;
  byte d = num / 8 % 2;
  byte e = num / 16 % 2;
  byte f = num / 32 % 2;
  byte g = num / 64 % 2;
  byte h = num / 128 % 2;

  digitalWrite(6, a);
  digitalWrite(7, b);
  digitalWrite(8, c);
  digitalWrite(9, d);
  digitalWrite(10, e);
  digitalWrite(11, f);
  digitalWrite(12, g);
  digitalWrite(13, h);
}

