
/*
6) Fa�a uma sub-rotina que receba como par�metro um inteiro no intervalo de 1 a 9 e mostre a seguinte
tabela de multiplica��o (no exemplo, n = 9):
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Multiplicacao(int num) {
    int i, j, mult;

    for (i = 1; i <num; i++) {
        for (j = 1; j <= num; j++) {

                printf("%d \n", mult = i * j);

        }
    }
}

int main(int argc, char** argv) {
    int num;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    Multiplicacao(num);

    return (EXIT_SUCCESS);
}
