#define RELAY1  10                        
#define RELAY2  9                        
#define RELAY3  8  


void setup() 
{
Serial.begin(9600);
pinMode(RELAY1, OUTPUT);
pinMode(RELAY2, OUTPUT);
pinMode(RELAY3, OUTPUT);
pinMode(11, OUTPUT);

Serial.println("Enter number of Trials");
Serial.println("");
}

void loop() 

{
int Trial=0, i=0;

if (Serial.available() >0)
{ 
 Trial = Serial.parseInt(); 
 Serial.print("No of Trials: ");
 Serial.print(Trial);
 Serial.println("");
 if (Trial >= 1)
 {
  for(i=1; i<=Trial; i++)
  {
  Serial.print("TRIAL: ");
    Serial.print(i);
  delay(2000); 
  digitalWrite(11, HIGH);
  delayMicroseconds(1000);
  digitalWrite(11, LOW);
  delay(6000);
  Serial.print("\t Relay On");
  digitalWrite(RELAY1, HIGH);
  digitalWrite(RELAY2, HIGH);
  delay(7000);
  digitalWrite(RELAY1, LOW);
  digitalWrite(RELAY2, LOW);
  Serial.print("\t Relay Off");
  delay(35000);
  Serial.print("\t Task Done");
  Serial.println("");
 }
 }
 else 
 {
  Serial.println("Number of Trials should be greater than 1");
 }
}
}
