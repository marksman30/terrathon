int ledPin1 = 9;                 // LED connected to digital pin 13
int ledPin2 = 7;
void setup()
{
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}
int check=0;
void loop()
{
  digitalWrite(ledPin2, LOW);//initial state
  digitalWrite(ledPin1, LOW);//initial state
  digitalWrite(ledPin2, HIGH);//move
  delay(1000);
  digitalWrite(ledPin2, LOW); //stop
  delay(90000);                  
  digitalWrite(ledPin1, HIGH);//move
  delay(1000);
  digitalWrite(ledPin1,LOW);//stop
  delay(90000);
  digitalWrite(ledPin2,HIGH);//move
  delay(1000);
  digitalWrite(ledPin2,LOW);//stop
  delay(90000);
  digitalWrite(ledPin2,HIGH);//move
  delay(1000);
  digitalWrite(ledPin2,LOW);//stop
  
//   
//  digitalWrite(ledPin1, HIGH);   // sets the LED on 3 2 5
//  delay(1000);                  // waits for a second  //Down
//  digitalWrite(ledPin2, LOW); 
//   delay(2000);



 
//  digitalWrite(ledPin1, LOW);   // sets the LED on
//  delay(1000);                  // waits for a second  //UP
//  digitalWrite(ledPin2, HIGH);
//  delay(2000);
//
//  
//  digitalWrite(ledPin1, LOW);   // sets the LED on
//  delay(1000);                  // waits for a second  //UP
//  digitalWrite(ledPin2, HIGH);
//  delay(2000);
// 
   for(;;)
   {;}
  
   
//  check++;                    
}
//
//const int pwm = 2 ;  //initializing pin 2 as pwm
//const int in_1 = 8 ;
//const int in_2 = 9 ;
//
////For providing logic to L298 IC to choose the direction of the DC motor 
//
//void setup()
//{
//pinMode(pwm,OUTPUT) ;   //we have to set PWM pin as output
//pinMode(in_1,OUTPUT) ;  //Logic pins are also set as output
//pinMode(in_2,OUTPUT) ;
//}
//
//void loop()
//{
////For Clock wise motion , in_1 = High , in_2 = Low
//
//digitalWrite(in_1,HIGH) ;
//digitalWrite(in_2,LOW) ;
//analogWrite(pwm,255) ;
//
///*setting pwm of the motor to 255
//we can change the speed of rotaion
//by chaning pwm input but we are only
//using arduino so we are using higest
//value to driver the motor  */
//
////Clockwise for 3 secs
//delay(3000) ;     
//
////For brake
//digitalWrite(in_1,HIGH) ;
//digitalWrite(in_2,HIGH) ;
//delay(1000) ;
//
////For Anti Clock-wise motion - IN_1 = LOW , IN_2 = HIGH
//digitalWrite(in_1,LOW) ;
//digitalWrite(in_2,HIGH) ;
//delay(3000) ;
//
////For brake
//digitalWrite(in_1,HIGH) ;
//digitalWrite(in_2,HIGH) ;
//delay(1000) ;
// }
