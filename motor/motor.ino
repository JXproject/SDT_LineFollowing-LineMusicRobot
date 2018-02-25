// ------------------------------------------------------- Motors
int motor_left[] = {6, 5};
int motor_right[] = {4, 3};
// ------------------------------------------------------- Setup
void setup() {
 Serial.begin(9600);
// Setup motors
 int i;
 for(i = 0; i < 2; i++){
 pinMode(motor_left[i], OUTPUT);
 pinMode(motor_right[i], OUTPUT);
 }
}
// -------------------------------------------------------- Loop
void loop() { 
drive_forward();
 delay(5000);
 motor_stop();
 drive_backward();
 delay(5000);
 motor_stop();
 turn_left();
 delay(1000);
 motor_stop();
 turn_right();
 delay(1000);
 motor_stop();
motor_stop();
 delay(1000);
 motor_stop();
}
// --------------------------------------------------------------------------- Drive
void motor_stop(){
 analogWrite(motor_left[0], 1); //brake (outputs shorted to ground
analogWrite(motor_left[1], 1); 
analogWrite(motor_right[0], 1); 
analogWrite(motor_right[1], 1);
 delay(25);
}
void drive_forward(){
   Serial.println(analogRead(0));
 analogWrite(motor_left[0], 255); 
analogWrite(motor_left[1], 0); 
analogWrite(motor_right[0], 255); 
analogWrite(motor_right[1], 0); 
}
void drive_backward(){
 analogWrite(motor_left[0], 0); 
analogWrite(motor_left[1], 255); 
analogWrite(motor_right[0], 0); 
analogWrite(motor_right[1], 255); 
}
void turn_left(){
 analogWrite(motor_left[0], 0); 
analogWrite(motor_left[1], 255); 
analogWrite(motor_right[0], 255); 
analogWrite(motor_right[1], 0);
}
void turn_right(){
 analogWrite(motor_left[0], 255); 
analogWrite(motor_left[1], 0); 
analogWrite(motor_right[0], 0); 
analogWrite(motor_right[1], 255); 
}
