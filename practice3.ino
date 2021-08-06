#include <Servo.h>

int const PotPin=A0;
int valPot = 0;

Servo servol;
int pmwOutput = 4;

void setup() {
  servol.attach(pwmOutput);
  servol.write(0);

}

void loop() {
  valPot = analogRead(PotPin); /// 0 al 1024--->  522;
  int rangeDegrees = map( ValPot, 0, 1024, 0, 180);
  servol.write(rangeDegrees);
}