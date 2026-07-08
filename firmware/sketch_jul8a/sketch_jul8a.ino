#include <ESP32BLECombo.h>

ESP32BLECombo ble;

const int BUTTON_PIN = 9;
bool lastButtonState = HIGH;

void setup() {
  Serial.begin(1152000);
  Serial.println("Initializing...");

  pinMode(BUTTON_PIN, INPUT_PULLUP);

  ESP32BLEComboConfig cfg;
  cfg.mode = ESP32BLEComboMode::KEYBOARD_MOUSE;
  cfg.deviceName = "C3 Macropad";
  cfg.manufacturer = "Espressif";
  cfg.batteryLevel 100;
  cfg.appearance = ESP32BLEComboAppearance::AUTO;

  ble.begin(cfg);
  Serial.println("BLE started, ready to pair.");
}

void loop() {
  if(ble.isConnected()) {
    int currentButtonState = digitalRead(BUTTON_PIN);

    if(currentButtonState == LOW && lastButtonState == HIGH){
      Serial.println("Button pressed, executing macro");

      //Maco will go here

      delay(150);
    }

    lastButtonState = currentButtonState;
  }
}