#define led 13
#define knob 0



void setup() {
  pinMode(led, OUTPUT);

}

void loop() {
 int val = analogRead(knob);
 val = map(val, 1, 1024, 1, 255);
 analogWrite(led, val);
}
