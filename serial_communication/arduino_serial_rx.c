#include <Servo.h>

Servo motor1;

void setup() {
  motor1.attach(13);  
  motor1.writeMicroseconds(1500); // Initialize motor1
  Serial.begin(9600); // Start serial communication
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    int x = input.toInt();

    int speed1 = map(x, -32767, 32767, 1100, 1900);
    motor1.writeMicroseconds(speed1);
    printf("wrote speed1: %d to motor1 \n",speed1);
  }
}
