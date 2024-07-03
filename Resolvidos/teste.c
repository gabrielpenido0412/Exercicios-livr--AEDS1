/*
17) Fa�a um programa que receba seis n�meros inteiros e mostre:
    || os n�meros pares digitados;
    || a soma dos n�meros pares digitados;
    || os n�meros �mpares digitados; e
    || a quantidade de n�meros �mpares digitados.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[6], pares[6], impares[6], somaP = 0, contI = 0, i;
    int p1 = 0, p2 = 0;

    for (i = 0; i < 6; i++) {
        printf("Digite o %d n�mero: ", i + 1);
        scanf("%d", &n[i]);
        if (n[i] % 2 == 0) {
            somaP += n[i];
            pares[p1] = n[i];
            p1++;
        } else {
            contI++;
            impares[p2] = n[i];
            p2++;
        }
    }

    printf("\nN�meros pares digitados: ");
    for (i = 0; i < p1; i++) {
        printf("%d | ", pares[i]);
    }
    printf("\nN�meros impares digitados: ");
    for (i = 0; i < p2; i++) {
        printf("%d | ", impares[i]);
    }
    printf("\nSoma dos n�meros pares digitados: %d \n", somaP);
    printf("Quantidade de n�meros primos digitados: %d \n", contI);

}
