#include <stdio.h>

int main() {
    // Definição do número de casas a serem movidas
    const int movimentoTorre = 5;
    const int movimentoBispo = 5;
    const int movimentoRainha = 5;

    // Movimento da Torre (linha reta horizontalmente ou verticalmente) usando for
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (diagonal para cima e à direita) usando while
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= movimentoBispo) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da Rainha (linha reta para a esquerda) usando do-while
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= movimentoRainha);

    return 0;
}
