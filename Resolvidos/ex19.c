#include <stdio.h>
int main(){
    int m,n,i,soma;
    printf("Escreva o primeiro membro de um par:");
    scanf("%d",&m);
    printf("Escreva o segundo membro de um par:");
    scanf("%d",&n);
    if(m<0 || n<0){
        printf("Invalido");
    }else{
        while(m<n){
            soma=0;
            for(i=m;i<=n;i++){
                //A soma vai somar com o valor atual de i.Ou seja,, se m=3 e n=5,começa no 0+3, ai vai pro 3+4,e termina no 7+5. Sempre faça o teste de mesa!
                soma=soma+i;
            }
            printf("A soma eh %d",soma);
            printf("\nEscreva o primeiro membro de um par:");
            scanf("%d",&m);
            printf("\nEscreva o segundo membro de um par:");
            scanf("%d",&n);
            //Se o usuario digitar um numero negativo após a primeira repetição, o código é quebrado.
                if(m<0 || n<0){
                    printf("Invalido");
                    break;
                }
        }
    }
}
