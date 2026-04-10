#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float valor;
    float soma = 0.0;
    int contador = 0;

    //Inicio
    printf("--- Calculadora de Média ---\n");
    printf("Digite valores positivos para o calculo funcionar.\n");
    printf("Digite um valor negativo a qualquer momento para parar.\n\n");

    //Pegar valor
    printf("Digite um valor: ");
    scanf("%f", &valor);

    //Enquanto valor for maior ou igual a 0 ele continua
    while (valor >= 0) {
        soma += valor;
        contador += 1;

        //Pede um novo valor
        printf("Digite um valor: ");
        scanf("%f", &valor);
    }

    //Evitar que o usuario coloque negativo de inicio
    if (contador > 0) {

        float media = soma / contador;

        printf("\n===================================\n");
        printf("Quantidade de numeros digitados: %d\n", contador);
        printf("A soma total é: %.2f\n", soma);
        printf("A media dos valores é: %.2f\n", media);
        printf("===================================\n");
    }
    else {
        printf("\nVoce digitou um valor negativo logo no inicio!\n");
        printf("Impossível calcular a média sem valores positivos!\n");
    }

    system("pause");
    return 0;
}