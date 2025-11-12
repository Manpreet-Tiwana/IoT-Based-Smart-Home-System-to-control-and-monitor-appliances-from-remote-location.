#define PIR_PIN D2
#define RELAY_LIGHT D5
#define RELAY_FAN D6

unsigned long lastMotionTime = 0;
const unsigned long timeout = 10000; // 10 seconds

void setup() {
  Serial.begin(115200);
  pinMode(PIR_PIN, INPUT);
  pinMode(RELAY_LIGHT, OUTPUT);
  pinMode(RELAY_FAN, OUTPUT);

  digitalWrite(RELAY_LIGHT, HIGH);
  digitalWrite(RELAY_FAN, HIGH);
  Serial.println("Smart Energy Saver Initialized...");
}

void loop() {
  int motion = digitalRead(PIR_PIN);
  if (motion == HIGH) {
    Serial.println("Motion Detected → Turning ON Devices");
    digitalWrite(RELAY_LIGHT, LOW);
    digitalWrite(RELAY_FAN, LOW);
    lastMotionTime = millis();
  } 
  else if (millis() - lastMotionTime > timeout) {
    Serial.println("No Motion → Turning OFF Devices");
    digitalWrite(RELAY_LIGHT, HIGH);
    digitalWrite(RELAY_FAN, HIGH);
  }
  delay(200);
}
