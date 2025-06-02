#include <stdio.h>

int main() {
    // Quantidade de casas a serem movimentadas
    const int movimentoTorre = 5;
    const int movimentoBispo = 5;
    const int movimentoRainha = 8;

    // Movimento da Torre: 5 casas para a direita (utiliza for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (utiliza while)
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da Rainha: 8 casas para a esquerda (utiliza do-while)
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentoRainha);

    return 0;
}

