#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int hora, minutos, segundos;

    printf("Horas: ");
    scanf("%d", &hora);

    printf("Minutos: ");
    scanf("%d", &minutos);

    printf("Horas: ");
    scanf("%d", &segundos);

    printf("Conversao para segundos: %d \n", ConverterParaSegundos(hora, minutos, segundos));

    return (EXIT_SUCCESS);
}

int ConverterParaSegundos(int H, int M, int S) {
    int soma;

    soma = (3600*H)+ (60*M) + S;

    return soma;
}
