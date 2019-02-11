int mL1 = 7; //outside of the voidsetup so its global, meaning any function can use it
int mR1 = 8;
int enM1 = 6; //can use any of the analog pins
int mL2 = 11;
int mR2 = 12;
int enM2 = 13;
int LS= A3;
int linsen;
int IR= A0;
int dist;
int val;

void moveFwd(int spd);
void moveBwd(int spd);
void spinRight(int spd);
void setup() {
  //Motor
  Serial.begin(9600);
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
  moveFwd(175);
  delay(2000);
  moveBwd(175);
  delay(2000);
  //Line sensor
  linsen=analogRead(LS);
  //Serial.println(linsen);
  delay(2000);
  //Infrared Sensor
  dist=analogRead(IR);
  val=pow(3027.4/dist, 1.2134);
  //Serial.println(val);
  delay(500);
  */

  //Commands
  if(linsen > 800){
    moveBwd(255);
  }
  else if(val < 50){
    moveFwd(255);
    }
  else{
    spinRight(255);
    delay(2000);

    spinLeft(255);
    delay(2000);

  }
  */
}


//Motor actions
void moveFwd(int spd){
  analogWrite(enM1,spd);  
  digitalWrite(mL1,HIGH);
  digitalWrite(mR1,LOW);

  analogWrite(enM2,spd);  
  digitalWrite(mL2,LOW);
  digitalWrite(mR2,HIGH);
}
void moveBwd(int spd){
  analogWrite(enM1,spd);
  digitalWrite(mL1,LOW);
  digitalWrite(mR1,HIGH);

  analogWrite(enM2,spd);
  digitalWrite(mL2,HIGH);
  digitalWrite(mR2,LOW);
}
void spinRight(int spd){
  analogWrite(enM1, spd);
  digitalWrite(mL1, HIGH);
  digitalWrite(mR1, LOW);

  analogWrite(enM2, spd);
  digitalWrite(mL2, LOW);
  digitalWrite(mR2, HIGH);
}
/*void spinLeft(int spd){ 
  analogWrite(enM1, spd);
  digitalWrite(mL1, LOW);
  digitalWrite(mR1, HIGH);

  analogWrite(enM2, spd);
  digitalWrite(mL2, HIGH);
  digitalWrite(mR2, LOW);

}
*/
