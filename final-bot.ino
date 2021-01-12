#include<IRremote.h>


int ir_pin=11;    //IR signal receving pin


//Motor left

int enA=9;
int input1=2;
int input2=3;


//motor right

int enB=10;
int input3=5;
int input4=4;


IRrecv irrecv(ir_pin);               //decalring an object
decode_results results;              //declaring object to store results

void setup()
{
  //Serial.begin(9600);

  irrecv.enableIRIn();               //enable infrared communication

  //set all pins to output
  pinMode(enA,OUTPUT);
  pinMode(enB,OUTPUT);
  pinMode(input1,OUTPUT);
  pinMode(input2,OUTPUT);
  pinMode(input3,OUTPUT);
  pinMode(input4,OUTPUT);

  //motors shoud be in off state initilay
  digitalWrite(input1,LOW);
  digitalWrite(input2,LOW);
  digitalWrite(input3,LOW);
  digitalWrite(input4,LOW);

}

void loop()
{
  analogWrite(enA, 255);             //enables are at high
  analogWrite(enB, 255);             //enables are used to control speed of motors you can vary from 0 to 255.

  if(irrecv.decode(&results))        //decoding results
  {
  Serial.println(results.value,HEX);
  irrecv.resume();                      //reading next value
  }

  //both motors rotate in one direction forward or backward
  if (results.value==0x-------)          //replace ------- with the value you got
  {
    digitalWrite(input1,LOW);
    digitalWrite(input2,HIGH);
    digitalWrite(input3,HIGH);
    digitalWrite(input4,LOW);
  }
  if (results.value== 0x-------  )
  {
    digitalWrite(input1,HIGH);
    digitalWrite(input2,LOW);
    digitalWrite(input3,LOW);
    digitalWrite(input4,HIGH);
  }

  //only right motor rotates
  if (results.value== 0x------- )
  {
    digitalWrite(input1,LOW);
    digitalWrite(input2,LOW);
    digitalWrite(input3,HIGH);
    digitalWrite(input4,LOW);
  }

  //only left motors rotates
  if (results.value== 0x-------)
  {
    digitalWrite(input1,LOW);
    digitalWrite(input2,HIGH);
    digitalWrite(input3,LOW);
    digitalWrite(input4,LOW);
  }

  //stops the bot
  if (results.value== 0x-------)
  {
    digitalWrite(input1,LOW);
    digitalWrite(input2,LOW);
    digitalWrite(input3,LOW);
    digitalWrite(input4,LOW);
  }
}
