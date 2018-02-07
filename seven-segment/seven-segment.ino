/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
int pA=2,pB=3,pC=4,pD=5,pE=6,pF=7,pG=8;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.

  
  pinMode(pA, OUTPUT);
  pinMode(pB, OUTPUT);
  pinMode(pC, OUTPUT);
  pinMode(pD, OUTPUT);
  pinMode(pE, OUTPUT);
  pinMode(pF, OUTPUT);
  pinMode(pG, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(pA, HIGH);
  digitalWrite(pB, LOW);
  digitalWrite(pC, LOW);
  digitalWrite(pD, HIGH);
  digitalWrite(pE, HIGH);
  digitalWrite(pF, HIGH);
  digitalWrite(pG, HIGH);
  delay(1000);                     
  //1

  digitalWrite(pA, LOW);
  digitalWrite(pB, LOW);
  digitalWrite(pC, HIGH);
  digitalWrite(pD, LOW);
  digitalWrite(pE, LOW);
  digitalWrite(pF, HIGH);
  digitalWrite(pG, LOW);
  delay(1000);                     
  //2

  digitalWrite(pA, LOW);
  digitalWrite(pB, LOW);
  digitalWrite(pC, LOW);
  digitalWrite(pD, LOW);
  digitalWrite(pE, HIGH);
  digitalWrite(pF, HIGH);
  digitalWrite(pG, LOW);
  delay(1000);                     
  //3

  digitalWrite(pA, HIGH);
  digitalWrite(pB, LOW);
  digitalWrite(pC, LOW);
  digitalWrite(pD, HIGH);
  digitalWrite(pE, HIGH);
  digitalWrite(pF, LOW);
  digitalWrite(pG, LOW);
  delay(1000);                     
  //4

  digitalWrite(pA, LOW);
  digitalWrite(pB, HIGH);
  digitalWrite(pC, LOW);
  digitalWrite(pD, LOW);
  digitalWrite(pE, HIGH);
  digitalWrite(pF, LOW);
  digitalWrite(pG, LOW);
  delay(1000);                     
  //5

  digitalWrite(pA, LOW);
  digitalWrite(pB, HIGH);
  digitalWrite(pC, LOW);
  digitalWrite(pD, LOW);
  digitalWrite(pE, LOW);
  digitalWrite(pF, LOW);
  digitalWrite(pG, LOW);
  delay(1000);                     
  //6

   digitalWrite(pA, LOW);
  digitalWrite(pB, LOW);
  digitalWrite(pC, LOW);
  digitalWrite(pD, HIGH);
  digitalWrite(pE, HIGH);
  digitalWrite(pF, HIGH);
  digitalWrite(pG, HIGH);
  delay(1000);                     
  //7

   digitalWrite(pA, LOW);
  digitalWrite(pB, LOW);
  digitalWrite(pC, LOW);
  digitalWrite(pD, LOW);
  digitalWrite(pE, LOW);
  digitalWrite(pF, LOW);
  digitalWrite(pG, LOW);
  delay(1000);                     
  //8

   digitalWrite(pA, LOW);
  digitalWrite(pB, LOW);
  digitalWrite(pC, LOW);
  digitalWrite(pD, LOW);
  digitalWrite(pE, HIGH);
  digitalWrite(pF, LOW);
  digitalWrite(pG, LOW);
  delay(1000);                     
  //9

   digitalWrite(pA, LOW);
  digitalWrite(pB, LOW);
  digitalWrite(pC, LOW);
  digitalWrite(pD, LOW);
  digitalWrite(pE, LOW);
  digitalWrite(pF, LOW);
  digitalWrite(pG, HIGH);
  delay(1000);                     
  //0
}
