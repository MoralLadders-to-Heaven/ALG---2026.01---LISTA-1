#include <stdio.h>
#include <stdlib.h>
#define MAX_DIGITOS 30
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001);

    int fib1[MAX_DIGITOS] = {0};
    int fib2[MAX_DIGITOS] = {0};
    int temp[MAX_DIGITOS] = {0};

    fib1[0] = 0;  // 1º termo
    fib2[0] = 1;  // 2º termo

    printf("Fibonacci com precisão total até o 100:\n\n");

    for (int n = 1; n <= 100; n++) {
        //Imprime termo atual
        printf("Termo %3d: ", n);

        // Pula os zeros à esquerda
        int i = MAX_DIGITOS - 1;
        while (i > 0 && fib1[i] == 0) i--;

        // Imprime o número
        for (; i >= 0; i--) {
            printf("%d", fib1[i]);
        }
        printf("\n");

        //Calcula o proximo termo
        int vai_um = 0;
        for (int j = 0; j < MAX_DIGITOS; j++) {
            int soma = fib1[j] + fib2[j] + vai_um;
            temp[j] = soma % 10;
            vai_um = soma / 10;
        }

        // Atualiza os dois termos anteriores
        for (int j = 0; j < MAX_DIGITOS; j++) {
            fib1[j] = fib2[j];
            fib2[j] = temp[j];
        }
    }

    system("pause");
    return 0;
}