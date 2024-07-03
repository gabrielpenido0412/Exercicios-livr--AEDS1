#include <stdio.h>
int main(){
    int t=9;
    int i,j,cont,n[t];
    for (i=0;i<t;i++){
            printf("Digite um numero inteiro: ");
        scanf("%d",&n[i]);
    }
    for (i=0;i<t;i++){
        cont=0;
        for (j=1;j<=n[i];j++){
            if(n[i] % j==0){
                cont ++;
            }
        }
        if(cont<=2 &&n[i]!=1){
            printf("\n %d",n[i]);
            printf(" %d",i);
        }
    }

}
