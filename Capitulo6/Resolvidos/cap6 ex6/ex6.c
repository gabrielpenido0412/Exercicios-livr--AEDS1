#include <stdio.h>
int main(){
    //o aux s� t� ai pra ajudar a transformar o v[j] em v[j+1], j� que s� colocar direto v[j]=v[j+1] t� dando erro
    int n=9;
    int v[n],i,j,aux;
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    printf("Ordem atual: ");
    for(i=0;i<n;i++){
        printf(" %d",v[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(v[j]>v[i]){
                aux=v[i];
                v[i]=v[j];
                v[i]=aux;
            }
        }
        printf("\n Ordem decrescente: \n ");
        for(j=0;j<n;j++){
            printf(" %d",v[j]);
        }
    }
}
