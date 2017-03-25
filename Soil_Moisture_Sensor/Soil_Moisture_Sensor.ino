#define sensorPin A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  String outputMessage = "Umidade do solo: ";
  Serial.println(outputMessage+getSoilMoisture());
  delay(2000);
}

/* Gets percentage integer from the sensor data and convert it to a string*/
String getSoilMoisture(){
  String soilMoisture = String(getSensorData())+"%";
  return soilMoisture;
}

/* Fetches raw data from the sensor and map it to percentage values*/
int getSensorData(){
  int sensorValue =   analogRead(sensorPin);
  
  int mappedSensorValue = map(sensorValue, 1024, 0, 0, 100);
  return mappedSensorValue;
}

