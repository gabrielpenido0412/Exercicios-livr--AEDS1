#include <stdio.h>

int main() {
    int n[15], primo[15];
    int i, j,indprimo = 0, cont, ver = 0;

    for (i = 0; i < 15; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);

        cont = 0;
        for (j =1; j <= n[i]; j++) { //Verificar se o número digitado é primo
            if (n[i] % j == 0) {
                cont++;
            }
        }
        if (cont == 2) {
            primo[indprimo] = n[i]; //Se N for primo será armzenado no vetor de primos
            indprimo++;
            ver++; //Contagem dos números primos para verificação no final
        }
    }

    if (ver > 0) {
        printf("\nNúmeros primos digitados: ");
        for (i = 0; i < indprimo; i++) {
            printf("%d | ", primo[i]);
        }
    }else {
        printf("\nNenhum número primo digitado. \n");
    }

}
