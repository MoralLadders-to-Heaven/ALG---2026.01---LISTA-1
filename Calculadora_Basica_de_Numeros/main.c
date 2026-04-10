#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void) {

    SetConsoleOutputCP(65001);

    long long numero[2], resultado;
    char operador;

    //Pegar dados
    printf("OBS: Use \"+\" para soma, \"-\" para subtração, \"*\" para multiplicação e \"/\" para divisão.\n");
    printf("OBS: Essa calculadora só faz operações entre dois números.\n");
    printf("Escreva a conta matemática que deseja fazer:");
    scanf("%lld %c %lld" , &numero[0], &operador, &numero[1]);

    //Calcular dados
    if (operador == '+') {
        resultado = numero[0] + numero[1];
    }
    if (operador == '-') {
        resultado = numero[0] - numero[1];
    }
    if (operador == '*') {
        resultado = numero[0] * numero[1];
    }
    if (operador == '/') {
        resultado = numero[0] / numero[1];
    }

    //Resultado
    printf("O resultado de seu calculo é: %lld\n", resultado);


    system("pause");

    return 0;
}