void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue =   analogRead(A0);
  int mappedValue = map(sensorValue, 1024, 0, 0, 100);
  String partOne = "Umidade do solo: ";
  String output = partOne+mappedValue+"%";
  Serial.println(output);
  delay(2000);
}

