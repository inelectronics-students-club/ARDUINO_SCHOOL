#define buzzer 11

void setup(){
  pinMode(buzzer,OUTPUT);
}

void loop(){
  
for (int i=20; i<2000; i+=40) 
{
tone(buzzer, i); 
delay(100);
}
noTone(buzzer);
delay(3000);
}
