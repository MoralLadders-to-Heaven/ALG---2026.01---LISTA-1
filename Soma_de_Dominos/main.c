#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int somaTotal = 0;
    int totalPecas = 0;

    printf("Calculando os pontos do Dominó...\n\n");

    //Lado esquerdo
    for (int i = 0; i <= 6; i++) {

       //Lado direito
        for (int j = i; j <= 6; j++) {

            //Mostra a peça que está sendo contada e o resultado da soma
            printf("Peça (%d-%d) | Pontos: %d\n", i, j, i + j);

            //Soma os dois lados da peça ao total geral
            somaTotal += (i + j);

            //onta mais uma peça gerada
            totalPecas += 1;
        }
    }

    printf("\n====================================\n");
    printf("Total de peças geradas: %d\n", totalPecas);
    printf("A soma de TODOS os pontos é: %d\n", somaTotal);
    printf("====================================\n");

    system("pause");
    return 0;
}