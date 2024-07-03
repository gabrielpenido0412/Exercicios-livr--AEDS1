#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Multiplicacao(int x) {
    int i, j, mult;

    for (i = 1; i <=x; i++) {


            printf("%d \n", mult = i * x);

        }

}

int main(int argc, char** argv) {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    Multiplicacao(num);

    return (EXIT_SUCCESS);
}
