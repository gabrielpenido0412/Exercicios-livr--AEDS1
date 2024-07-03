#include <stdio.h>
int main(){
    float b,h,area;
    do{
        printf("Escreva o valor da base: ");
        scanf("%f",&b);
        printf("Escreva o valor da altura: ");
        scanf("%f",&h);
        if(b<=0 || h<=0){
            printf("Invalido");
        }
    }while(b<=0 || h<=0);
    area= (b*h)/2;
    printf("A area eh %.2f",area);
}
