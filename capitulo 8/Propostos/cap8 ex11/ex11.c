
/*
11) Faça uma sub-rotina que receba como parâmetro um valor inteiro e positivo N, indicando a quantidade
de parcelas de uma soma S, calculada pela fórmula:
 *
 S: 2/4 + 5/5 + 10/6 + 17/7 + 26/8 +...+ (n²+ 1)/(n + 3)
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float soma(int );

int main() {
    int N;
    float result;
    printf("Digite um valor para N: ");
    scanf("%d", &N);
    result=soma(N);
    printf("%.2f",result);


}

float soma(int N) {
    float n;
    float S=0;
    for (n= 1; n <= N; n++) {
        S+=(pow(n,2)+1)/(n+3);
    }
    return S;
}
