/*
1) Fa�a uma sub-rotina que receba um n�mero inteiro e positivo N como par�metro e retorne a soma dos n�me-
ros inteiros existentes entre o n�mero 1 e N (inclusive). */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num;

    printf("Digite um n�mero qualquer positivo: ");
    scanf("%d", &num);

    printf("A soma dos numeros entre 1 e %d � de %d. \n", num, SomaNumeros(num));

    return (EXIT_SUCCESS);
}

int SomaNumeros(int N) {
    int i, soma = 0;

    for (i = 1; i <=N; i++) {
        soma += i;
    }

    return soma;
}
