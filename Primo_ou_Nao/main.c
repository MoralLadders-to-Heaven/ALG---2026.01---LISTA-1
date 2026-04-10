#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(65001);

    long long num, divisores = 0;

    //Inicio
    printf("Digite um numero inteiro positivo: ");
    scanf("%lld", &num);

    if (num <= 1) {
        printf("O numero %lld não é primo :(\n", num);
    } else {
        //Contar os divisores
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                divisores += 1;
            }
        }

        //Verificar se é primo ou não
        if (divisores == 2) {
            printf("O numero %lld é PRIMO!\n", num);
        } else {
            printf("O numero %lld não é primo :(\n", num, divisores);
        }
    }

    system("pause");
    return 0;
}