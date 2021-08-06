int POTENCIOMETERPIN = A0;
int led1=1;
int led2=2;
int led3=3;
int inputPot=0;
#define MAXCMP 1023

void ledsRange(int inputPot){
  int cuenta = map(inputPot,0,1023,1,3);
  Serial.print("Dato Pot map: ");
  Serial.println(cuenta);
  switch (cuenta){
    case 1:
      digitalWrite(led1,1);
      digitalWrite(led2,0);
      digitalWrite(led3,0);
      break;
    case 2:
      digitalWrite(led1,1);
      digitalWrite(led2,1);
      digitalWrite(led3,0);
      break;
    case 3:
      digitalWrite(led1,1);
      digitalWrite(led2,1);
      digitalWrite(led3,1);
      break;
    default:
      digitalWrite(led1,0);
      digitalWrite(led2,0);
      digitalWrite(led3,0);
  }
//  if(inputPot<MAXCMP/3){
//    digitalWrite(led1,1);
//    digitalWrite(led2,0);
//    digitalWrite(led3,0);
//  }else if(inputPot>MAXCMP/3){
//      digitalWrite(led1,1);
//      digitalWrite(led2,1);
//      digitalWrite(led2,1);   
//  }else if(inputPot==MAXCMP){
//        digitalWrite(led1,1);
//        digitalWrite(led2,1);
//        digitalWrite(led3,1);
//  }
}

void setup() {
  Serial.begin(9600);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

//digitalWrite(led1,1);
//digitalWrite(led2,1);
//digitalWrite(led3,1);
}

void loop() {
  inputPot=analogRead(POTENCIOMETERPIN);
  ledsRange(inputPot);
  Serial.println(inputPot);
  delay(100);

}
