//Motor left

int enA=9;
int input1=2;
int input2=3;


//motor right

int enB=10;
int input3=5;
int input4=4;

void setup()
{
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
  analogWrite(enA, 255);    //actvating enable pin
  analogWrite(enB, 255);    //enables are used to control speed of motors

  // Turn on motor A & B
  //input is given to control direction of motors


  digitalWrite(input1, LOW);      //motor left
  digitalWrite(input2, HIGH);

  digitalWrite(input3, HIGH);     //motor right
  digitalWrite(input4, LOW);
  delay(2000);

  //now you can change direction by changing high and low in left and right motors
}
