#include <stdio.h>
int main(){
    int n=6;
    int i,par[n],impar[n],indpar,indimpar,somapar,contimpar,vet[n];
    somapar=0;
    contimpar=0;
    for(i=0;i<n;i++){
        printf("Digite um numero: ");
        scanf("%d",&vet[i]);
    }
    par[n]=vet[0];
    indpar=0;
    impar[n]=vet[0];
    indimpar=0;
    for(i=0;i<n;i++){
        if(vet[i] % 2 ==0){
            par[indpar]=vet[i];
            indpar++;
            somapar=somapar+vet[i];
        }else{
            contimpar++;
            impar[indimpar]=vet[i];
            indimpar++;
        }
    }
    printf("Relatorio");
    printf("\n Numeros pares: ");
    for(i=0;i<indpar;i++){
       printf("%d | ", par[i]);
    }
    printf("\n Numeros impares: ");
    for(i=0;i<indimpar;i++){
       printf("%d | ", impar[i]);
    }
    printf("\n Soma os pares eh %d",somapar);
    printf("\n Numero de impares eh %d",contimpar);
}
