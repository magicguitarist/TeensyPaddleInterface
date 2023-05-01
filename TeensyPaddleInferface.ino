#include <Keyboard.h>
#include <Bounce2.h>

#define LEFT_PIN 0
#define RIGHT_PIN 1
#define LED_PIN 13

Bounce leftButton = Bounce();
Bounce rightButton = Bounce();

bool leftButtonPressed = false;
bool rightButtonPressed = false;

void setup() {
  Keyboard.begin();
  pinMode(LED_PIN, OUTPUT);

  leftButton.attach(LEFT_PIN, INPUT_PULLUP);
  leftButton.interval(10);
  rightButton.attach(RIGHT_PIN, INPUT_PULLUP);
  rightButton.interval(10);
}

void loop() {
  leftButton.update();
  rightButton.update();

  if (leftButton.fell()) {
    Keyboard.press(KEY_LEFT_CTRL);
    leftButtonPressed = true;
  } else if (leftButton.rose()) {
    Keyboard.release(KEY_LEFT_CTRL);
    leftButtonPressed = false;
  }

  if (rightButton.fell()) {
    Keyboard.press(KEY_RIGHT_CTRL);
    rightButtonPressed = true;
  } else if (rightButton.rose()) {
    Keyboard.release(KEY_RIGHT_CTRL);
    rightButtonPressed = false;
  }

  if (leftButtonPressed || rightButtonPressed) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}
