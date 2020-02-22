
const int buzzer =  2;

void setup() {
  pinMode(buzzer, OUTPUT);
       
}

void loop(){
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(300);  
}
