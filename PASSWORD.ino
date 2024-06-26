const int SW1=12;
const int SW2=10;
const int SW3=4;
const int SW4=9;
const int red=5;
const int green=4;
void setup(){
  pinMode(SW1,INPUT);
  pinMode(SW2,INPUT);
  pinMode(SW3,INPUT);
  pinMode(SW4,INPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
}
void loop(){
  if(digitalRead(SW1)==HIGH && digitalRead(SW3)==HIGH){
    digitalWrite(green,HIGH);
    digitalWrite(red,LOW);
  }
  else{
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
  }}
 
