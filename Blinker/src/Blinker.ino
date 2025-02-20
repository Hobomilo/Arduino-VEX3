void setup() {
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
//R
dot();
dash();
dot();
delay(500);
//E
dot();
delay(500);
//I
dot();
dot();
delay(500);
//D
dash();
dot();
dot();
delay(500);
}
void dash() {
digitalWrite(LED_BUILTIN, HIGH);
delay(300);
digitalWrite(LED_BUILTIN, LOW);
delay(200);
}
void dot() {
digitalWrite(LED_BUILTIN, HIGH);
delay(100);
digitalWrite(LED_BUILTIN, LOW);
delay(200);
}