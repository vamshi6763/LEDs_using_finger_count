int x;
void setup() {
 Serial.begin(115200);
 Serial.setTimeout(1);
 pinMode(D1,OUTPUT);
 pinMode(D2,OUTPUT);
 pinMode(D3,OUTPUT);
 pinMode(D4,OUTPUT);
 pinMode(D5,OUTPUT);
 }
void loop() {
 while (!Serial.available());
 x = Serial.readString().toInt();
 //Serial.print(x + 1);
 if(x==0){
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  digitalWrite(D5,LOW);
 }
 else if(x==1)
 {
  digitalWrite(D1,HIGH);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  digitalWrite(D5,LOW);
 }
 else if(x==2)
 {
  digitalWrite(D1,HIGH);
  digitalWrite(D2,HIGH);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  digitalWrite(D5,LOW);
 }
 else if(x==3)
 {
  digitalWrite(D1,HIGH);
  digitalWrite(D2,HIGH);
  digitalWrite(D3,HIGH);
  digitalWrite(D4,LOW);
  digitalWrite(D5,LOW);
 }
 else if(x==4)
 {
  digitalWrite(D1,HIGH);
  digitalWrite(D2,HIGH);
  digitalWrite(D3,HIGH);
  digitalWrite(D4,HIGH);
  digitalWrite(D5,LOW);
 }
 else if(x==5)
 {
  digitalWrite(D1,HIGH);
  digitalWrite(D2,HIGH);
  digitalWrite(D3,HIGH);
  digitalWrite(D4,HIGH);
  digitalWrite(D5,HIGH);
 }
 else
 {
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  digitalWrite(D5,LOW);
 }
}
