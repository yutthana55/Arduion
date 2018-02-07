/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/
#include <Servo.h>
Servo myservo;
// digital pin 2 has a pushbutton attached to it. Give it a name:
int IO1 = A1, IO2 = A2,IO3 =A3;
int in1 = 0,in2 = 0,in3 = 0;
int count = 0;
int sA=2,sB=3, sC=4, sD=5, sE=6, sF=7, sG=8;


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  myservo.attach(9);
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(IO1, INPUT_PULLUP);
  pinMode(IO2, INPUT_PULLUP);
  pinMode(IO3, INPUT_PULLUP);
   pinMode(sA, OUTPUT);
  pinMode(sB, OUTPUT);
  pinMode(sC, OUTPUT);
  pinMode(sD, OUTPUT);
  pinMode(sE, OUTPUT);
  pinMode(sF, OUTPUT);
  pinMode(sG, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  in1 = digitalRead(IO1);
  in2 = digitalRead(IO2);
  in3 = digitalRead(IO3);
  if(in3==0)
    if(count>0)
      count--;
    else
      count=0;
      
    if(in2==0)
      if(count<9)
        count++;
      else
        count=9;

  displaynum(count);
        
        if(in1==0){
    myservo.write(count*20); 
    delay(1000);  
        }
        else{
            myservo.write(10); 
    delay(1000);
          }
  // print out the state of the button:
  Serial.print(in1);
  Serial.print(in2);
  Serial.print(in3);
  Serial.print("  count -> ");
  Serial.println(count);
  delay(300);        // delay in between reads for stability
}
  void displaynum(int count) {
  if(count==1){
  digitalWrite(sA,HIGH);
  digitalWrite(sB,LOW);
  digitalWrite(sC,LOW);
  digitalWrite(sD,HIGH);
  digitalWrite(sE,HIGH);
  digitalWrite(sF,HIGH);
  digitalWrite(sG,HIGH);
  }
  
//2
 if(count==2){
  digitalWrite(sA, LOW);
  digitalWrite(sB, LOW);
  digitalWrite(sC, HIGH);
  digitalWrite(sD, LOW);
  digitalWrite(sE, LOW);
  digitalWrite(sF, HIGH);
  digitalWrite(sG, LOW);                     
 }
//3
 if(count==3){
  digitalWrite(sA, LOW);
  digitalWrite(sB, LOW);
  digitalWrite(sC, LOW);
  digitalWrite(sD, LOW);
  digitalWrite(sE, HIGH);
  digitalWrite(sF, HIGH);
  digitalWrite(sG, LOW);   
 }
  //4
 if(count==4){
  digitalWrite(sA, 1);
  digitalWrite(sB, 0);
  digitalWrite(sC, 0);
  digitalWrite(sD, 1);
  digitalWrite(sE, 1);
  digitalWrite(sF, 0);
  digitalWrite(sG, 0);
}  
  //5
 if(count==5){
  digitalWrite(sA, 0);
  digitalWrite(sB, 1);
  digitalWrite(sC, 0);
  digitalWrite(sD, 0);
  digitalWrite(sE, 1);
  digitalWrite(sF, 0);
  digitalWrite(sG, 0);
}  
  //6
 if(count==6){
  digitalWrite(sA, 0);
  digitalWrite(sB, 1);
  digitalWrite(sC, 0);
  digitalWrite(sD, 0);
  digitalWrite(sE, 0);
  digitalWrite(sF, 0);
  digitalWrite(sG, 0);
  } 
  //7
  if(count==7){
  digitalWrite(sA, 0);
  digitalWrite(sB, 0);
  digitalWrite(sC, 0);
  digitalWrite(sD, 1);
  digitalWrite(sE, 1);
  digitalWrite(sF, 1);
  digitalWrite(sG, 1);   
  }
  //8
 if(count==8){
  digitalWrite(sA, 0);
  digitalWrite(sB, 0);
  digitalWrite(sC, 0);
  digitalWrite(sD, 0);
  digitalWrite(sE, 0);
  digitalWrite(sF, 0);
  digitalWrite(sG, 0); 
 }
  //9
 if(count==9){
  digitalWrite(sA, 0);
  digitalWrite(sB, 0);
  digitalWrite(sC, 0);
  digitalWrite(sD, 0);
  digitalWrite(sE, 1);
  digitalWrite(sF, 0);
  digitalWrite(sG, 0);
 }
  if(count==0){
  digitalWrite(sA, 0);
  digitalWrite(sB, 0);
  digitalWrite(sC, 0);
  digitalWrite(sD, 0);
  digitalWrite(sE, 0);
  digitalWrite(sF, 0);
  digitalWrite(sG, 1);
  }
}
