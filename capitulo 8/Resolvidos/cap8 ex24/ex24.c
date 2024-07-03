#include <stdio.h>
int Calculadora(int x, char operacao, int y);
int main() {
    int n1, n2;
    char sinal;



    printf("Calculadora Simples \n\n");

    printf("1º valor: ");
    scanf("%d", &n1);

    printf("Sinal: ");
    scanf(" %c", &sinal);

    printf("2º valor: ");
    scanf("%d", &n2);
    int result= Calculadora(n1,sinal,n2);
    printf("%d \n",result);


}

int Calculadora(int x, char operacao, int y) {


    if (operacao=='+'){
        return x+y;
    }else if(operacao=='*'){
        return x*y;
    }else{
        printf("Invalido");
        exit (0);
    }
}
