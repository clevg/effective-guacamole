# Controle de LED com Botão e Debounce

Projeto de exemplo em C++ para sistemas embarcados. Simula a leitura de um botão e o controle de um LED, com tratamento de debounce.

## Como funciona
- Cada vez que o botão é pressionado, o estado do LED é invertido (liga/desliga).
- Um pequeno tratamento de debounce é feito para evitar leituras erradas.

## Estrutura
- `Button.h` e `Button.cpp`: classe que gerencia o estado do botão.
- `main.cpp`: loop principal de leitura e controle do LED.

## Como compilar
```bash
g++ src/*.cpp -o led_button
