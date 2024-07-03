#include <stdio.h>
#include <stdlib.h>
int main(){
    int  mes;
    float salc,salj;
    printf("Digite o salario de carlos: ");
    scanf ("%f",&salc);
    salj=salc/3;
    mes=0;
    while(salj<salc){
        salc=(salc*1.02);
        salj=(salj*1.05);
        mes++;
    }
    printf("%d",mes);
}

