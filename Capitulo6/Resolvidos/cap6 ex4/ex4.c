#include <stdio.h>
int main(){
    int n=8;
    int i,j,k,v1[n],v2[n],v3[n];
    j=0;
    k=0;
    for(i=0;i<n;i++){
        printf("Escreva um valor: ");
        scanf("%d",&v1[i]);
        if(v1[i]<0){
            v2[j]=v1[i];
            j++;
        }else if(v1[i]>0){
            v3[k]=v1[i];
            k++;
        }
    }
    if(j>0){
        for(i=0;i<j;i++){
            printf("%d",v2[i]);
        }
    }else{
      printf("Nao ha negativos");
    }
    if(k>0){
       for(i=0;i<k;i++){
            printf("\n %d",v3[i]);
        }
    }else{
       printf("Nao ha positivos");
    }

}
