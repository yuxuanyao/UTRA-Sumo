int mL1 = 7; 
int mR1 = 8;
int enM1 = 6; 
int mL2 = 13;
int mR2 = 12;
int enM2 = 11;

void moveFwd(int spd);
void moveBwd(int spd);
void spinRight(int spd);
void spinLeft(int spd);

void setup() {
  Serial.begin(9600);

  pinMode(enM1,OUTPUT);
  pinMode(enM2,OUTPUT);
  pinMode(mL1,OUTPUT);
  pinMode(mR1,OUTPUT);
  pinMode(mL2,OUTPUT);
  pinMode(mR2,OUTPUT);

}

void loop() {
  moveFwd(175);
}

void moveBwd(int spd){
  analogWrite(enM1,spd);  
  digitalWrite(mL1,HIGH);
  digitalWrite(mR1,LOW);

  analogWrite(enM2,spd);  
  digitalWrite(mL2,HIGH);
  digitalWrite(mR2,LOW);
}
void moveFwd(int spd){
  analogWrite(enM1,spd);
  digitalWrite(mL1,LOW);
  digitalWrite(mR1,HIGH);

  analogWrite(enM2,spd);
  digitalWrite(mL2,LOW);
  digitalWrite(mR2,HIGH);
}
void spinRight(int spd){
  analogWrite(enM1,spd);  
  digitalWrite(mL1,HIGH);
  digitalWrite(mR1,LOW);

  analogWrite(enM2,spd);
  digitalWrite(mL2,LOW);
  digitalWrite(mR2,HIGH);
}
void spinLeft(int spd){
  analogWrite(enM1,spd);  
  digitalWrite(mL1,LOW);
  digitalWrite(mR1,HIGH);

  analogWrite(enM2,spd);
  digitalWrite(mL2,HIGH);
  digitalWrite(mR2,LOW);
}


