#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("TABUADAS DO 2 AO 10\n");
    printf("==========================\n\n");

    //Inicio
    for (int i = 2; i <= 10; i++) {
        printf("--- Tabuada do %d ---\n", i);

        //Defini MUltiplicador
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}