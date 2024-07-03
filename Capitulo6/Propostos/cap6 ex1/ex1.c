#include <stdio.h>
int main(){
    int i,aux,j,n[4];
    for (i=0;i<4;i++){
        printf("Escreva um valor: ");
        scanf("%d",&n[i]);
    }
    for (i=0;i<4;i++){
        printf("%d |",n[i]);
    }
    for (i=0;i<4;i++){
        for (j=i+1;j<4;j++){
            if(n[j]<n[i]){
                aux=n[i];
                n[i]=n[j];
                n[j]=aux;
            }
        }
    }
    printf("\n");
    for (j=0;j<4;j++){
        printf("%d |",n[j]);
    }
     for (i=0;i<4;i++){
        for (j=i+1;j<4;j++){
            if(n[j]>n[i]){
                aux=n[i];
                n[i]=n[j];
                n[j]=aux;
            }
        }
    }
     printf("\n");
    for (j=0;j<4;j++){
        printf("%d |",n[j]);
    }

}
