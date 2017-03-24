const int ldrPin = A0;
const int redPin = 13;
const int greenPin = 12;
void setup(){
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}
void loop(){
  int ldrStatus = analogRead(ldrPin);
  if(ldrStatus <= 50){
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
  }else{
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
  }
}

