//Calcular a soma dos inteiros de 1 a 10.
//Entrada: x,soma
//saida:a soma até x ser 10
//Processamento: usar o while
#include <stdio.h>
int main (){
    int soma,x;
    x=1;
    soma=0;
    while(x<=10){
        soma=soma+x;
        ++x;
        printf("\n A soma eh %d",soma);
    }
}

