#include <stdio.h>
int main(){
    int n=10;
    int t=5;
    int i,v[n],d[t],j;
    for(i=0;i<n;i++){
        printf("Digite um numero : ");
        scanf("%d",&v[n]);
    }
    for(i=0;i<t;i++){
        printf("Digite um divisor : ");
        scanf("%d",&d[t]);
    }
    printf("Identificando divisores");
     for(i=0;i<n;i++){
       for(j=0;j<t;j++){
        if(v[i] % d[j]==0){
            printf("O numero %d eh divisivel por %d da posicao %d",v[i],d[j],j);
        }
       }
    }


}
