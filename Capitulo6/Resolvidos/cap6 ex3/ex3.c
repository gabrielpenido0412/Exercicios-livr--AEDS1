#include <stdio.h>
int main(){
    int n=10;
    int r=20;
    int i,v1[n],v2[n],v3[r],j;
    j=0;
    for (i=0;i<n;i++){
        printf("Digite um valor para o primeiro vetor: ");
        scanf("%d",&v1[i]);
        v3[j]=v1[i];
        j++;
        printf("Digite um valor para o segundo vetor: ");
        scanf("%d",&v2[i]);
        v3[j]=v2[i];
        j++;
    }
    for(i=0;i<r;i++){
        printf("%d",v3[i]);
    }
}
