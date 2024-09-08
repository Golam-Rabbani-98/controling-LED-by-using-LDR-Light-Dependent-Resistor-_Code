#include<Wire.h>
#include <Servo.h>
#define LDRPin A2
Servo ser;


void setup() {

  ser.attach(10);
  Serial.begin(9600);
}

void loop() {
  float sensorValue = analogRead(LDRPin);
  float amp = sensorValue*(5000 / 1024.0);
  delay(1000);
  Serial.print("Amp: ");
  Serial.println(amp);
  if(amp>20)
    ser.write(180);
   else
   ser.write(0);
}