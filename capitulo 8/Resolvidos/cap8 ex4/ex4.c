#include <stdio.h>
#include <stdlib.h>

void ConverterSegundos(int seg) {

    int hr = (seg / 60) / 60; //Calculo das horas
    int min = (seg / 60) % 60; //Calculo dos minutos
    int segundos = seg % 60; //Calculo dos segundos

    printf("%d : %d : %d \n", hr, min, segundos);
}

int main(int argc, char** argv) {
    int segundos, horario[3];

    printf("Digite os segundos: ");
    scanf("%d", &segundos);
    ConverterSegundos(segundos);

    return (EXIT_SUCCESS);
}
