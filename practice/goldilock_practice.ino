void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  int dist[]={2,4,8,3,6};
  int i;
  for(i=0;i<=4;i=i+1){
    if(dist[i]==4){
      Serial.println("found");
    }
    }
    delay(50000);
  }
  // put your main code here, to run repeatedly:


