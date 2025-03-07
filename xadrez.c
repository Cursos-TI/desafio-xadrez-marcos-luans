#include <stdio.h>

int main() {
    // Definição do número de casas a serem movidas para cada peça
    const int movimentoTorre = 5;
    const int movimentoBispo = 5;
    const int movimentoRainha = 8;

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

    // Linha em branco para separar o movimento do Cavalo
    printf("\n");

    // Movimento do Cavalo (duas casas para baixo e uma para a esquerda)
    printf("Movimento do Cavalo:\n");

    // Loop for para mover duas casas para baixo
    const int casasParaBaixo = 2;
    for (int i = 1; i <= casasParaBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop while para mover uma casa para a esquerda
    const int casasParaEsquerda = 1;
    int m = 1;
    while (m <= casasParaEsquerda) {
        printf("Esquerda\n");
        m++;
    }

    return 0;
}