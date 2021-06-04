#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura botões
typedef union {
  struct {
    // Analogicos
    // unsigned int LX;                 //  0 -  9 - Esquerdo X
    // unsigned int LY;                 // 10 - 19 - Esquerdo Y

    // DPAD
    unsigned Button_DPAD_UP:1;       // 0 - PAD UP
    unsigned Button_DPAD_DOWN:1;     // 1 - PAD DOWN
    unsigned Button_DPAD_LEFT:1;     // 2 - PAD LEFT
    unsigned Button_DPAD_RIGHT:1;    // 3 - PAD RIGHT

    // Start Select
    unsigned Button_START :1;        // 4 - START
    unsigned Button_SELECT:1;        // 5 - SELECT

    // Triggers
    unsigned Button_L1:1;            // 6 - LB
    unsigned Button_R1:1;            // 7 - RB
    unsigned Button_L2:1;            // 8 - LT
    unsigned Button_R2:1;            // 9 - RT

    // Ação
    unsigned Button_X :1;             // 10 - A
    unsigned Button_O :1;             // 11 - B
    unsigned Button_Q :1;             // 12 - X
    unsigned Button_A :1;             // 13 - Y

    // Botão Analógicos
    unsigned Button_L3:1;             // 14 - Left Stick
    unsigned Button_R3:1;             // 15 - Right Stick
  };

  unsigned dado;

} estrutura;
estrutura controle;

// typedef union {
//   struct {
//     unsigned int LX;
//     unsigned int LY;

//     unsigned int RX;
//     unsigned int RY;
//   };

//   unsigned dado:128;
  
// } analogicos;


int main() {
    // controle.Button_DPAD_DOWN = 1;
    // controle.Button_DPAD_UP = 1;
    // controle.Button_DPAD_LEFT = 1;
    // controle.Button_DPAD_RIGHT = 1;

    // printf("%i\n", controle.dado);

    printf("%i\n", sizeof(struct analogicos));
    printf("%i\n", sizeof(int));
    printf("%i\n", sizeof(char));


    return 0;
}
