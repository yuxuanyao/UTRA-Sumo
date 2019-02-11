int LS= A0;
int linsen;
void setup() {
  Serial.begin(9600);
  pinMode(LS,INPUT);
  
}
void loop() {
  linsen=analogRead(LS);
  Serial.println(linsen);
  delay(2000);
  
}
