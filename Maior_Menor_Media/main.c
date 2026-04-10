#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(void) {

    SetConsoleOutputCP(65001);

    int i;
    long long valor_usuario[4], maior_valor, menor_valor;
    double media;

    //Recebe valor
    for (i = 1; i < 4; i++) {
        printf("Insira o %d° valor:", i);
        scanf("%lld%", &valor_usuario[i]);
    }

    maior_valor = valor_usuario[1];
    menor_valor = valor_usuario[1];

    //Compara os valores
    for (i = 2; i <= 3; i++) {
        if (valor_usuario[i] > maior_valor)
            maior_valor = valor_usuario[i];

        if (valor_usuario[i] < menor_valor)
            menor_valor = valor_usuario[i];
    }

    //Calculo Média
    media = (valor_usuario[1] + valor_usuario[2] + valor_usuario[3]) / 3.0;

    //Resultado
    printf("O maior valor é: %lld\n", maior_valor);
    printf("O menor valor é: %lld\n", menor_valor);
    printf("E a média desse conjunto de números é: %.10f\n", media);

    system("pause");
    return 0;
}