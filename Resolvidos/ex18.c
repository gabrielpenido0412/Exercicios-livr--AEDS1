#include <stdio.h>
#include <math.h>
int main(){
    float n,cubo,quadrado,raiz;
    printf("Digite um numero: ");
    scanf("%f",&n);
    while(n>0){
        quadrado= pow(n,2);
        printf("\n %.2f",quadrado);
        cubo= pow(n,3);
        printf("\n %.2f",cubo);
        raiz=sqrt(n);
        printf("\n %.2f",raiz);
        printf("\n Digite um numero: ");
        scanf("%f",&n);
    }

}
