const int Sensor = 2;
const int buzzer = 3
const int LED = 4
int value;

void setup(){
  pinMode(Sensor, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(LED, OUTPUT);
}

void loop(){
  value = digitalRead(Sensor);

  if (value == 1){
    digitalWrite(buzzer, HIGH);
    digitalWrite(LED, HIGH);
  }else {
    digitalWrite(buzzer, LOW);
    digitalWrite(LED, LOW);
  }
  delay(1000);
}
