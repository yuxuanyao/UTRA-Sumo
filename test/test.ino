int mL1 = 7; 
int mR1 = 8;
int enM1 = 6; 
int mL2 = 13;
int mR2 = 12;
int enM2 = 11;
int LS= A3;
int linsen;
int IR= A5;
int dist;

void moveFwd(int spd);
void moveBwd(int spd);
void spinRight(int spd);
void spinLeft(int spd);
void setup() {
  //Motor
  Serial.begin(9600);
  delay(3000);
  pinMode(enM1,OUTPUT);
  pinMode(enM2,OUTPUT);
  pinMode(mL1,OUTPUT);
  pinMode(mR1,OUTPUT);
  pinMode(mL2,OUTPUT);
  pinMode(mR2,OUTPUT);
  //Infrared sensor
  pinMode (IR, INPUT);
  //Line sensor
  pinMode(LS,INPUT);
}

void loop() {
  //Line sensor
  linsen=analogRead(LS);
  //Infrared Sensor
  dist = analogRead(IR);
  dist = pow(3027.4/dist, 1.2134);

  

  //Commands
  if(linsen > 2){
    moveBwd(255);
  }

  else if(dist < 30){
    moveFwd(255);
    }

    
  else{
      spinRight(255);
  }
}


//Motor actions

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


