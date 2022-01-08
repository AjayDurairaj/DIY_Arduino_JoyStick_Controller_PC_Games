#define joyX A0
#define joyY A1
const int buttonPin = 2;     
void setup() {
Serial.begin(9600);
pinMode(buttonPin, INPUT_PULLUP);
}
void loop() {
int  xValue = analogRead(joyX);
int  yValue = analogRead(joyY);
Serial.print(String(xValue)+","+String(yValue)+","+digitalRead(buttonPin));
delay(50);
}
