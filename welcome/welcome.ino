#include <Servo.h>
Servo servo;
void setup() {
  Serial.begin(14400);
  servo.attach(9,600,2300);
}
void loop() {
  int sensorValue = analogRead(A1);
  Serial.println(sensorValue);
  if (sensorValue > 680){
     while (1>0){
      servo.write(0);
      delay(1000);
      servo.write(90);
      delay(1000);
     }
  delay(1)  
}
}
