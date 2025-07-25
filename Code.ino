const int Sensor = 2;
int value;

void setup(){
  pinMode(Sensor, INPUT);
  Serial.begin(9600);
}

void loop(){
  value = digitalRead(Sensor);

  if (value == 1){
    Serial.println("Flame Detected");
  }else {
    Serial.println("Flame Not Detected");
  }
  delay(1000);
}
