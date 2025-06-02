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

    // Movimento do Cavalo: 2 casas para baixo e 1 para a esquerda
    printf("\nMovimento do Cavalo:\n");

    const int casasBaixo = 2;
    const int casasEsquerda = 1;

    // Loop externo com 'for' para movimento para baixo
    for (int k = 0; k < casasBaixo; k++) {
        printf("Baixo\n");

        // Loop interno com 'while' para movimento para a esquerda (executa só na última iteração)
        if (k == casasBaixo - 1) {
            int l = 0;
            while (l < casasEsquerda) {
                printf("Esquerda\n");
                l++;
            }
        }
    }

    return 0;
}
