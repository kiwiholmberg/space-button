#include <Bounce.h>

const int buttonPin = 0;
const int bounceDelay = 100;

Bounce debouncedButton = Bounce(buttonPin, bounceDelay);

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  debouncedButton.update();

  if (debouncedButton.fallingEdge()) {
    onButtonPress();
  }
}

void onButtonPress() {
  Keyboard.press(KEY_SPACE);
  Keyboard.release(KEY_SPACE);
}

