/*
3) Elabore uma sub-rotina que receba dois números como parâmetros e retorne 0, se o primeiro número for
divisível pelo segundo número. Caso contrário, deverá retornar o próximo divisor.
 */

#include <stdio.h>
#include <stdlib.h>

int FuncaoRetorno(int N1, int N2);

int main(int argc, char** argv) {
    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("I: %d \n", FuncaoRetorno(n1, n2));

    return (EXIT_SUCCESS);
}

int FuncaoRetorno(int N1, int N2) {
    int i;

    if (N1 % N2 == 0) {
        return 0;
    }

    else {
        for(i=1;i<=N1;i++){
            if((i>N2)&&(N1%i==0))
                break;
        }
    }
    return i;
}
