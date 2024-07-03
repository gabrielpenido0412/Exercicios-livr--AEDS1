/*
14) Faça uma sub-rotina que receba um vetor X de 30 elementos inteiros como parâmetro e retorne dois
vetores A e B. O vetor A deve conter os elementos de X que sejam maiores que zero e o vetor B, os ele-
mentos menores ou iguais a zero.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void Separar_Valores_Positivos_e_Negativos(int *vetor, int *positivos, int *negativos);

int main() {
    int i, vet[30];
    int Positivos[30], Negativos[30];

    srand(time(NULL));

    printf("Vetor: ");
    for (i = 0; i < 30; i++) {+
        printf("%d | ", vet[i] = (rand() % 60) - 30);
    }

    Separar_Valores_Positivos_e_Negativos(&vet, &Positivos, &Negativos);



}

void Separar_Valores_Positivos_e_Negativos(int *vetor, int *positivos, int *negativos) {
    int i, PP = 0, PN = 0;

    for (i = 0; i < 30; i++) {
        if (vetor[i] > 0) {
            positivos[PP] = vetor[i];
            PP++;
        } else {
            negativos[PN] = vetor[i];
            PN++;
        }
    }

    printf("\n\nNuméros positivos: ");
    for (i = 0; i < PP; i++) {
        printf("%d | ",positivos[i]);
    }

    printf("\n\nNuméros negativos: ");
    for (i = 0; i <PN; i++) {
        printf("%d | ",negativos[i]);
    }

    printf("\n");

}
