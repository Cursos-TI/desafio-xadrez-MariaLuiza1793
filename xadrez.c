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

    // Movimento do Cavalo: 2 casas para baixo, 1 casa para a esquerda (forma "L")
    printf("\nMovimento do Cavalo:\n");

    const int passosBaixo = 2;
    const int passosEsquerda = 1;

    // Loop for para as duas casas para baixo
    for (int k = 0; k < passosBaixo; k++) {
        printf("Baixo\n");
    }

    // Loop while para uma casa à esquerda
    int l = 0;
    while (l < passosEsquerda) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}
