#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>

//Calculadora de Segundos


int main(void) {
    SetConsoleOutputCP(65001);
    long long valor_usuario_segundos;
    long double minuto_variavel, hora_variavel;
    long double minuto_inteiro = 0.0, hora_inteiro = 0.0;
    long double minuto_variavel2 = 0.0, minuto_inteiro2 = 0.0;
    long double segundos_vindo_do_minuto = 0.0, segundos_vindo_do_minuto2 = 0.0;


    printf("Insira o valor de segundos que deseja calcular:");
    scanf("%lld", &valor_usuario_segundos);

    //==================================== CÁLCULO MINUTO ====================================
    minuto_variavel = valor_usuario_segundos / 60.0;

    if (floor(minuto_variavel) == minuto_variavel) {
        minuto_inteiro = floor(minuto_variavel);
        segundos_vindo_do_minuto = 0;
    }
    else {
        minuto_inteiro = floor(minuto_variavel);
        segundos_vindo_do_minuto = (minuto_variavel - minuto_inteiro) * 60.0;
    }
    if (minuto_inteiro < 60) {
        printf("%lld Segundos é equivalente a:\n", valor_usuario_segundos);
        printf("%d Minutos", (int)minuto_inteiro);

        if ((int)segundos_vindo_do_minuto > 0) {
            printf(" e %d Segundos", (int)segundos_vindo_do_minuto);
        }
    }
    //==================================== CALCULO HORAS ====================================
    else {
        hora_variavel = minuto_inteiro / 60.0;

        if (floor(hora_variavel) == hora_variavel) {
            printf("%d Segundos é equivalente a:\n", valor_usuario_segundos);
            printf("%d Horas", (int)hora_variavel);
        }
        else {
            hora_inteiro = floor(hora_variavel);
            minuto_variavel2 = (hora_variavel - hora_inteiro) * 60.0;

            minuto_inteiro2 = floor(minuto_variavel2);
            segundos_vindo_do_minuto2 = ((minuto_variavel2 - minuto_inteiro2) * 60.0) + segundos_vindo_do_minuto;

            //==================================== RESULTADO FINAL ====================================
            printf("%lld Segundos é equivalente a:\n", (long long)valor_usuario_segundos);
            printf("%lld Horas", (long long)hora_inteiro);

            if ((int)minuto_inteiro2 > 0){
                printf(", %lld Minutos", (long long)minuto_inteiro2);
            }

            if (segundos_vindo_do_minuto2 > 0.1) {
                printf(" e %lld Segundos.\n", (long long)segundos_vindo_do_minuto2);
            }
        }
    }

    system("pause");
    return 0;
}

//aabababaaaaababababaaaaaaaaaabsbababdfbsbvdafsfa