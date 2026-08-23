#include <Servo.h>

// Pin definitions
const int LDR_PIN = A0;
const int LIGHT_PIN = 8;
const int FAN_PIN = 9;
const int DOOR_SERVO_PIN = 10;

const int FAN_SWITCH_PIN = 7;
const int DOOR_SWITCH_PIN = 6;

// LDR threshold
const int LIGHT_THRESHOLD = 500;

Servo doorServo;

void setup() {
  Serial.begin(9600);

  pinMode(LIGHT_PIN, OUTPUT);
  pinMode(FAN_PIN, OUTPUT);

  pinMode(FAN_SWITCH_PIN, INPUT_PULLUP);
  pinMode(DOOR_SWITCH_PIN, INPUT_PULLUP);

  doorServo.attach(DOOR_SERVO_PIN);

  // Initial conditions
  digitalWrite(LIGHT_PIN, LOW);
  digitalWrite(FAN_PIN, LOW);
  doorServo.write(0);
}

void loop() {

  // -------- Automatic Light using LDR --------
  int ldrValue = analogRead(LDR_PIN);

  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  if (ldrValue < LIGHT_THRESHOLD) {
    // Dark condition
    digitalWrite(LIGHT_PIN, HIGH);
  } 
  else {
    // Bright condition
    digitalWrite(LIGHT_PIN, LOW);
  }

  // -------- Fan Control using Switch --------
  if (digitalRead(FAN_SWITCH_PIN) == LOW) {
    digitalWrite(FAN_PIN, HIGH);
  } 
  else {
    digitalWrite(FAN_PIN, LOW);
  }

  // -------- Door Control using Switch + Servo --------
  if (digitalRead(DOOR_SWITCH_PIN) == LOW) {
    // Door open
    doorServo.write(90);
  } 
  else {
    // Door close
    doorServo.write(0);
  }

  delay(100);
}
