const int PWMA = (3);
const int PWMB = (5);
const int AI1 = (2);
const int AI2 = (4);
const int BI1 = (6);
const int BI2 = (7);
const int STBY = (8);



void setup() {
  pinMode(PWMA, OUTPUT);  //Motor-A Speed
  pinMode(PWMB, OUTPUT);  //Motor-B Speed
  pinMode(AI1, OUTPUT);  //Motor-A CW
  pinMode(AI2, OUTPUT);  //Motor-A CCW
  pinMode(BI1, OUTPUT);  //Motor-B CW
  pinMode(BI2, OUTPUT);  //Motor-B CCW
  pinMode(STBY, OUTPUT); //H-Bridge ON/OFF

  digitalWrite(STBY,HIGH);  //Activates H-Bridge
  digitalWrite(PWMA,LOW);  //Sets Motor-A starting speed to 0
  digitalWrite(PWMB,LOW);  //Sets Motor-B starting speed to 0
}

void loop() {
  
  //Sets Motor-A to CW and starts Idle speed
  digitalWrite(AI1,HIGH);
  digitalWrite(AI2,LOW);
  analogWrite(PWMA,64);
  delay(1000);
  //Sets Motor-B to CW and starts Idle speed
  digitalWrite(BI1,HIGH);
  digitalWrite(BI2,LOW);
  analogWrite(PWMB,64);
  delay(1000);
  //Sets both motors to full speed
  analogWrite(PWMA,255);
  analogWrite(PWMB,255);
  delay(5000);
  //Turns off both motors
  analogWrite(PWMA,0);
  analogWrite(PWMB,0);
  delay(1000);
  //Sets Motor-A to CCW and starts Idle speed
  digitalWrite(AI1,LOW);
  digitalWrite(AI2,HIGH);
  analogWrite(PWMA,64);
  delay(1000);
  //Sets Motor-B to CCW and starts Idle speed
  digitalWrite(BI1,LOW);
  digitalWrite(BI2,HIGH);
  analogWrite(PWMB,64);
  delay(1000);
  //Sets both motors to full speed
  analogWrite(PWMA,255);
  analogWrite(PWMB,255);
  delay(5000);
  //Turns off both motors
  analogWrite(PWMA,0);
  analogWrite(PWMB,0);
  delay(1000);

}
