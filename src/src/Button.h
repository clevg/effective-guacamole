#ifndef BUTTON_H
#define BUTTON_H

class Button {
private:
    bool currentState;
    bool lastState;
    bool pressed;
public:
    Button();
    void update(bool state);
    bool wasPressed();
};

#endif
