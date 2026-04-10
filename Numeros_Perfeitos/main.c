#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    printf("Numeros perfeitos entre 1 e 100:\n");

    //Vai andar de 1 a 100
    for (int num = 1; num <= 100; num++) {
        int somaDivisores = 0;

        //Encontra os divisores
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                somaDivisores += i;
            }
        }

        //Se a soma dos divisores for igual ao número ele é perfeito
        if (somaDivisores == num && num != 0) {
            printf("O numero %d é perfeito!\n", num);
        }
    }

    system("pause");
    return 0;
}