#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
    int i, vet[8];
    srand(time(NULL));


    printf("Vetor 1: ");
    for (i = 0; i < 8; i++) {
        printf("%d | ", vet[i] = (rand() % 16) - 8);
    }

    SepararValoresPositivos_e_Negativos(vet);

}

void SepararValoresPositivos_e_Negativos(int vet[]) {
    int positivos[8], negativos[8], P = 0, P2 = 0, i;

    for (i = 0; i < 8; i++) {
        if (vet[i] > 0) {
            positivos[P] = vet[i];
            P++;
        } else {
            negativos[P2] = vet[i];
            P2++;
        }
    }

    printf("\n\nValores positvos: ");
    for (i = 0; i < P; i++) {
        printf("%d ",positivos[i]);
    }
    printf("\nValores negativos: ");
    for (i = 0; i < P2; i++) {
        printf("%d ",negativos[i]);
    }
    printf("\n");
}
