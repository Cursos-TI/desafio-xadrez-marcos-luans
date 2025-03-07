#include <stdio.h>

// Função recursiva para mover a Torre (direita)
void moverTorre(int passos) {
    if (passos == 0) return; // Condição de parada
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para mover a Rainha (esquerda)
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Função recursiva para movimentação diagonal do Bispo (cima + direita)
void moverBispoRecursivo(int passos, int atual) {
    if (atual >= passos) return;

    printf("Cima Direita\n"); // Movimento único por chamada recursiva
    moverBispoRecursivo(passos, atual + 1); // Chamada recursiva
}

// Função usando loops aninhados para movimentação do Bispo (cima + direita)
void moverBispoComLoops(int passos) {
    for (int i = 0; i < passos; i++) { // Loop externo controla movimento vertical
        for (int j = 0; j <= i; j++) { // Loop interno controla movimento horizontal
            printf("Cima Direita\n");
        }
    }
}

// Movimento aprimorado do Cavalo: duas casas para cima e uma para a direita
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    int movimentos[3] = {1, 1, 0}; // Define os movimentos: 1 para "Cima", 0 para "Direita"

    // Loop externo controla duas casas para cima
    for (int i = 0; i < 2; i++) {
        if (movimentos[i] == 1) {
            printf("Cima\n");
        } else {
            break; // Garante que a direita só acontece após os dois movimentos para cima
        }
    }

    // Loop interno para uma casa à direita
    for (int j = 0; j < 1; j++) {
        if (movimentos[2] == 0) {
            printf("Direita\n");
            break; // Interrompe após a primeira casa à direita
        }
    }
}

int main() {
    // Número de casas que cada peça deve se mover
    const int movimentoTorre = 5;
    const int movimentoBispo = 5;
    const int movimentoRainha = 8;

    // Movimento da Torre (recursivo)
    printf("Movimento da Torre:\n");
    moverTorre(movimentoTorre);

    // Movimento do Bispo (recursivo)
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(movimentoBispo, 0);

    // Movimento do Bispo (com loops aninhados)
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoComLoops(movimentoBispo);

    // Movimento da Rainha (recursivo)
    printf("\nMovimento da Rainha:\n");
    moverRainha(movimentoRainha);

    // Linha em branco para separar o movimento do Cavalo
    printf("\n");

    // Movimento do Cavalo (loops aninhados + controle de fluxo)
    moverCavalo();

    return 0;
}
