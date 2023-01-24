void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(switchPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int switchState = digitalRead(switchPin);
  if (switchState == HIGH){
    Serial.println("Hello World!");
  } else {
    Serial.println("It's 2023");
  }
  delay(1000);
}

