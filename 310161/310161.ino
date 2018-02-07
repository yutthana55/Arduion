
#include <Servo.h>

Servo myservo;
// the setup function runs once when you press reset or power the board
int sA=2,sB=3, sC=4, sD=5, sE=6, sF=7, sG=8;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  myservo.attach(9);
  
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(sA, OUTPUT);
  pinMode(sB, OUTPUT);
  pinMode(sC, OUTPUT);
  pinMode(sD, OUTPUT);
  pinMode(sE, OUTPUT);
  pinMode(sF, OUTPUT);
  pinMode(sG, OUTPUT);
}

void loop(){
  int s1=0;
  int sensorValue = analogRead(A0);
  s1=map(sensorValue,170,300,0,9);
  // print out the value you read:
  Serial.print(sensorValue);
  Serial.print("   S1=  ");
  Serial.println(s1);
  //delay(500);
  
    myservo.write(s1*10);
    displaynum(s1);
  
}

// the loop function runs over and over again forever
void displaynum(int num) {
  //1
  if (num==1){
  for (int i=0;i<100;i++){
  digitalWrite(sA, 1);
  digitalWrite(sB, 0);
  digitalWrite(sC, 0);
  digitalWrite(sD, 1);
  digitalWrite(sE, 1);
  digitalWrite(sF, 1);
  digitalWrite(sG, 1);
  delay(1);
  digitalWrite(sA, 1);
  digitalWrite(sB, 1);
  digitalWrite(sC, 1);
  digitalWrite(sD, 1);
  digitalWrite(sE, 1);
  digitalWrite(sF, 1);
  digitalWrite(sG, 1);
  delay(20);}
  }
  //2
  if (num==2){
  for (int i=0;i<100;i++){
  digitalWrite(sA, 0);
  digitalWrite(sB, 0);
  digitalWrite(sC, 1);
  digitalWrite(sD, 0);
  digitalWrite(sE, 0);
  digitalWrite(sF, 1);
  digitalWrite(sG, 0);
  delay(1);
  digitalWrite(sA, 1);
  digitalWrite(sB, 1);
  digitalWrite(sC, 1);
  digitalWrite(sD, 1);
  digitalWrite(sE, 1);
  digitalWrite(sF, 1);
  digitalWrite(sG, 1);
  delay(20);}
  }
  //3
  if (num==3){
  for (int i=0;i<100;i++){
  digitalWrite(sA, 0);
  digitalWrite(sB, 0);
  digitalWrite(sC, 0);
  digitalWrite(sD, 0);
  digitalWrite(sE, 1);
  digitalWrite(sF, 1);
  digitalWrite(sG, 0);
  delay(1);
  digitalWrite(sA, 1);
  digitalWrite(sB, 1);
  digitalWrite(sC, 1);
  digitalWrite(sD, 1);
  digitalWrite(sE, 1);
  digitalWrite(sF, 1);
  digitalWrite(sG, 1);
  delay(20);}
  }
  //4
  if (num==4){
  for (int i=0;i<100;i++){
  digitalWrite(sA, 1);
  digitalWrite(sB, 0);
  digitalWrite(sC, 0);
  digitalWrite(sD, 1);
  digitalWrite(sE, 1);
  digitalWrite(sF, 0);
  digitalWrite(sG, 0);
  delay(1);
  digitalWrite(sA, 1);
  digitalWrite(sB, 1);
  digitalWrite(sC, 1);
  digitalWrite(sD, 1);
  digitalWrite(sE, 1);
  digitalWrite(sF, 1);
  digitalWrite(sG, 1);
  delay(20);}
  }
  //5
  if (num==5){
  for (int i=0;i<100;i++){
  digitalWrite(sA, 0);
  digitalWrite(sB, 1);
  digitalWrite(sC, 0);
  digitalWrite(sD, 0);
  digitalWrite(sE, 1);
  digitalWrite(sF, 0);
  digitalWrite(sG, 0);
  delay(1);
  digitalWrite(sA, 1);
  digitalWrite(sB, 1);
  digitalWrite(sC, 1);
  digitalWrite(sD, 1);
  digitalWrite(sE, 1);
  digitalWrite(sF, 1);
  digitalWrite(sG, 1);
  delay(20);}
  }
  //6
  if (num==6){
  for (int i=0;i<100;i++){
  digitalWrite(sA, 0);
  digitalWrite(sB, 1);
  digitalWrite(sC, 0);
  digitalWrite(sD, 0);
  digitalWrite(sE, 0);
  digitalWrite(sF, 0);
  digitalWrite(sG, 0);
  delay(1);
  digitalWrite(sA, 1);
  digitalWrite(sB, 1);
  digitalWrite(sC, 1);
  digitalWrite(sD, 1);
  digitalWrite(sE, 1);
  digitalWrite(sF, 1);
  digitalWrite(sG, 1);
  delay(20);}
  }
  //7
  if (num==7){
  for (int i=0;i<100;i++){
  digitalWrite(sA, 0);
  digitalWrite(sB, 0);
  digitalWrite(sC, 0);
  digitalWrite(sD, 1);
  digitalWrite(sE, 1);
  digitalWrite(sF, 1);
  digitalWrite(sG, 1);
  delay(1);
  digitalWrite(sA, 1);
  digitalWrite(sB, 1);
  digitalWrite(sC, 1);
  digitalWrite(sD, 1);
  digitalWrite(sE, 1);
  digitalWrite(sF, 1);
  digitalWrite(sG, 1);
  delay(20);}
  }
  //8
  if (num==8){
  for (int i=0;i<100;i++){
  digitalWrite(sA, 0);
  digitalWrite(sB, 0);
  digitalWrite(sC, 0);
  digitalWrite(sD, 0);
  digitalWrite(sE, 0);
  digitalWrite(sF, 0);
  digitalWrite(sG, 0);
  delay(1);
  digitalWrite(sA, 1);
  digitalWrite(sB, 1);
  digitalWrite(sC, 1);
  digitalWrite(sD, 1);
  digitalWrite(sE, 1);
  digitalWrite(sF, 1);
  digitalWrite(sG, 1);
  delay(20);}
  }
  //9
  if (num==9){
  for (int i=0;i<100;i++){
  digitalWrite(sA, 0);
  digitalWrite(sB, 0);
  digitalWrite(sC, 0);
  digitalWrite(sD, 0);
  digitalWrite(sE, 1);
  digitalWrite(sF, 0);
  digitalWrite(sG, 0);
  delay(1);
  digitalWrite(sA, 1);
  digitalWrite(sB, 1);
  digitalWrite(sC, 1);
  digitalWrite(sD, 1);
  digitalWrite(sE, 1);
  digitalWrite(sF, 1);
  digitalWrite(sG, 1);
  delay(20);}
  }
  //0
  if (num==0){
  for (int i=0;i<100;i++){
  digitalWrite(sA, 0);
  digitalWrite(sB, 0);
  digitalWrite(sC, 0);
  digitalWrite(sD, 0);
  digitalWrite(sE, 0);
  digitalWrite(sF, 0);
  digitalWrite(sG, 1);
  delay(1);
  digitalWrite(sA, 1);
  digitalWrite(sB, 1);
  digitalWrite(sC, 1);
  digitalWrite(sD, 1);
  digitalWrite(sE, 1);
  digitalWrite(sF, 1);
  digitalWrite(sG, 1);
  delay(20);}
  }
}

