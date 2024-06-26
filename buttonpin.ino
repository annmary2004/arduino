int led1=3;
int buttonpin=4;
int buttonstate=0;
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(buttonpin,INPUT);
  }

void loop() {
  buttonstate=digitalRead(buttonpin);
 
    if(buttonstate==HIGH)
    {
      digitalWrite(led1,HIGH);
  }
  
  else
   
     digitalWrite(led1,LOW);

}
