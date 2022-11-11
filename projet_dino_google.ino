#define  trig  2 
#define  echo 5 
#define led_v  7
#define  led_g 8 
#define distance 15
unsigned long Time;
unsigned long dist;
void setup(){

  
  Serial.begin(9600); // initaite the serial communication
 pinMode(trig,OUTPUT); // set uo the trigger pin as output 
 digitalWrite(trig, 0 );// set the trig at low 
 pinMode(echo,INPUT ); // set up the echo pin as input 
pinMode(led_g,OUTPUT);
pinMode(led_r,OUTPUT);
  
}

void loop (){
  digitalWrite(trig, HIGH);// activate the trigger pin for 10 us
delayMicroseconds(10);
digitalWrite(trig, LOW);// disactivate the trrigger pin  
Time = pulseIn(echo,HIGH); // calculate how long did the wave take to bounce back from an object
                           // and detected by the echo pin  
dist = Time /58;//calculate the distance in cm which is time devide by the speed of sound  
//Serial.println(dist);
  if(dist <distance   )  {                                                         
  Serial.println("J" );// send the letter J via serial 
  delay(500) ; 
  digitalWrite(led_r,0); 
  digitalWrite(led_v,1); 
  
}
  else {
    digitalWrite(led_r,1); 
 digitalWrite(led_v,0);}
  
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
