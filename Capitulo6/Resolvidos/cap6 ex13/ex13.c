#include <stdio.h>
int main(){
    int n=9;
    int i,maior50,ind,cont,v[n];
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    cont=0;
    maior50=0;
    ind=0;
    for(i=0;i<n;i++){
        if(v[i]>50){
            maior50=v[i];
            ind=i;
            printf("\n Numero %d posicao %d",maior50,ind);
            cont++;
        }
     }
     if(cont==0){
        printf("Nao ha numeros maiores que 50");
     }
}
