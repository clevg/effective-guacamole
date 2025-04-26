#include "Button.h"

Button::Button() : currentState(false), lastState(false), pressed(false) {}

void Button::update(bool state) {
    currentState = state;
    pressed = (currentState == true && lastState == false);
    lastState = currentState;
}

bool Button::wasPressed() {
    return pressed;
}
