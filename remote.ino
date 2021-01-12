/* The libray used here may not come by default with arduino  installation. So you need to install by your
own.  This libary is written by Shirriff. */





#include<IRremote.h>                   //external library for IR communicarion

const int RECV_PIN=11;                 //Output from infrared recevier connected arduino pin 13

IRrecv irrecv(RECV_PIN);                //object cretion
decode_results results;                 //declaring results object to store result

void setup()
{

 Serial.begin(9600);                     //initilize Serial monitor
 irrecv.enableIRIn();
}

void loop()
{
  if(irrecv.decode(&results))             //Decoding results
  {
  Serial.println(results.value,HEX);      //printing decoded hexadecimal value in Serial monitor
  irrecv.resume();
                                          //next input
  }
}
