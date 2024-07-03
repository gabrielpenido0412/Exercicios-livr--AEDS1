/*
4) FaC'a uma sub-rotina que receba como parC"metro o raio de uma esfera, calcule e mostre no programa principal
o seu volume: v = 4*pi*RB3
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float CalculoVolumeEsfera(float r);
int main(int argc, char** argv) {
    float raio;

    printf("Digite o raio de uma esfera: ");
    scanf("%f", &raio);

    float v =CalculoVolumeEsfera(raio);
      printf("Volume: %.2f. \n", v);
    return (EXIT_SUCCESS);
}

float CalculoVolumeEsfera(float r) {
    float pi = 3.14, volume;
    volume = ((4/3)* pow(r, 3));
    return volume;
}
