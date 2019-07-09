
int Status = 12;
int sensor = 13;

void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT); // declare sensor as input
  pinMode(Status, OUTPUT);  // declare LED as output
}

void loop(){
  long state = digitalRead(sensor);
  delay(1000);
    if(state == HIGH){
      digitalWrite (Status, HIGH);
      Serial.println("Motion detected!");
      delay(5000);
    }
    else {
      digitalWrite (Status, LOW);
      Serial.println("Motion absent!");
      }
}
