int switchPin = 7;

void setup() {
  pinMode(switchPin, INPUT_PULLUP);
  // 启动串行命令
  Serial.begin(9600);
}

void loop() {
  // CND 与 7 相连
  if (digitalRead(switchPin) == LOW) {
    Serial.println("Paperclip connected");  

  // CND 与 7 断连
  } else {
    Serial.println("Paperclip NOT connected");  
  }

  delay(1000);
}
