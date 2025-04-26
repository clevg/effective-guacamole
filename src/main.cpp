#include "Button.h"
#include <iostream>
#include <chrono>
#include <thread>

#define LED_ON  true
#define LED_OFF false

bool ledState = LED_OFF;

void digitalWrite(bool state) {
    if (state)
        std::cout << "LED ON\n";
    else
        std::cout << "LED OFF\n";
}

int digitalReadButton() {
    int state;
    std::cout << "Pressione 1 para simular o botão pressionado, 0 para solto: ";
    std::cin >> state;
    return state;
}

int main() {
    Button button;

    while (true) {
        int buttonState = digitalReadButton();
        button.update(buttonState);

        if (button.wasPressed()) {
            ledState = !ledState;
            digitalWrite(ledState);
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Simula delay de 50ms
    }

    return 0;
}
