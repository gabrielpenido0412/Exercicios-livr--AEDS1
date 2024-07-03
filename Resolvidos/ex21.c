#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet[15],par[5],impar[5],i,j,k,posicaopar,posicaoimpar;
    posicaopar=0;
    posicaoimpar=0;
    //Pegando os valores pares e impares do vetor
    for(i=0;i<15;i++){
        printf("Digite um numero: ");
        scanf("%d",&vet[i]);
    }
    for(i=0;i<15;i++){
        if(vet[i]%2==0){
            par[posicaopar]=vet[i];
            posicaopar++;
        }else{
            impar[posicaoimpar]=vet[i];
            posicaoimpar++;
        }
        //Imprimi o vetor atual caso tenhamos mais que 5 pares(capacidade máxima do vetor)
        if(posicaoimpar==5){
            printf("\n Vetor cheio. Esvaziando: ");
            for(j=0;j<5;j++){
                printf("%d |",impar[j]);
            }
            //Zerar a posição permite que substituimos alguns conteudos do vetor mais pra frente
            posicaoimpar=0;

        }
        //Imprimi o vetor atual caso tenhamos mais que 5 impares(capacidade máxima do vetor)
        if(posicaopar==5){
            printf("\n Vetor cheio. Esvaziar: ");
            for(j=0;j<5;j++){
                printf("%d |",par[j]);
            }
            //Zerar a posição permite que substituimos alguns conteudos do vetor mais pra frente
             posicaopar=0;
        }
     }
     //Substitui os conteudos do vetor
     if(posicaopar!=0){
        printf("\n Vetor de pares restantes");
        for(k=0;k<5;k++){
            printf("%d |",par[k]);
        }
     }
     //Substitui os conteudos do vetor
     if(posicaoimpar!=0){
        printf("\n Vetor de impares restantes");
        for(k=0;k<5;k++){
            printf("%d |",impar[k]);
        }
     }
}
