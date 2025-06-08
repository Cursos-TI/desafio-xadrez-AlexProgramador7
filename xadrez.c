#include <stdio.h>

int main() {
    
    // Simulação do movimento da TORRE.
    // A Torre se move em linha reta. Vamos simular 5 casas para a direita.
    // Usamos a estrutura de repetição FOR para isso.

    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Simulação do movimento do BISPO.
    // O Bispo se move na diagonal. Vamos simular 5 casas na diagonal para cima e à direita.
    // Usamos a estrutura de repetição WHILE para isso.

    printf("Movimento do Bispo (5 casas na Diagonal - Cima e Direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // Simulação do movimento da RAINHA.
    // A Rainha pode se mover em todas as direções. Vamos simular 8 casas para a esquerda.
    // Usamos a estrutura de repetição DO-WHILE para isso.

    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

   return 0;
   
}