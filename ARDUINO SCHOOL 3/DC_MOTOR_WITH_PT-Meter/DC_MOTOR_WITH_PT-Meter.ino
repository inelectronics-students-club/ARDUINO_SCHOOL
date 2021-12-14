//The DIY Life
//4 November 2019
//Michael Klements

int in2Pin = 9;       // Define pins used for L293D
int in1Pin = 10;
int enable1Pin = 11;

int dir = 0;  // Define variables for motor direction and speed
int spd = 0;

void setup()
{
  pinMode(in2Pin, OUTPUT);  //Define pin modes
  pinMode(in1Pin, OUTPUT);
  pinMode(enable1Pin, OUTPUT);
}

void loop() {
  int potInput = analogRead(A0);  // Read potentiometer value
  spd = map(abs(potInput - 512), 0, 512, 0, 255); // Calculate motor speed, pot travel from midpoint
  if (potInput > 512) // Compare to potentiometer midpoint to get motor direction
    dir = 0;
  else
    dir = 1;
  driveMotor(); //Call function to drive motor at calculated speed and direction
}

void driveMotor() 
{
  if (dir)
  {
    digitalWrite(in1Pin, HIGH);
    digitalWrite(in2Pin, LOW);
  }
  else
  {
    digitalWrite(in1Pin, LOW);
    digitalWrite(in2Pin, HIGH);
  }
  analogWrite(enable1Pin, spd);
}
