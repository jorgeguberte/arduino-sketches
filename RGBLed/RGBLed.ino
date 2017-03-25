int redPin = 13;
int greenPin = 12;
int bluePin = 11;

void setup(){
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT); 
}

void loop(){
  setColor(255,255,255);

}

void setColor(int redValue, int greenValue, int blueValue){
  digitalWrite(redPin, redValue);
  digitalWrite(greenPin, greenValue);
  digitalWrite(bluePin, blueValue);
}

