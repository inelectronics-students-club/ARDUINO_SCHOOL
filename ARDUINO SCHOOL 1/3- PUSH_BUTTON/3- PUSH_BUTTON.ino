#define ledPin 8 
#define buttonPin 9 
bool state=LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin,INPUT_PULLUP);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
state=digitalRead(buttonPin);
Serial.println(state);
if(state==0){
  digitalWrite(ledPin,HIGH);
  }
else{
  digitalWrite(ledPin,LOW);
  }
}
