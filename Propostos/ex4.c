#include <stdio.h>
int main(){
    int i, n[15];
    for (i=0;i<15;i++){
        printf("Escreva um numero: ");
        scanf("%d",&n[i]);
    }
    for(i=0;i<15;i++){
        if(n[i]==30){
            printf("%d |",i);
        }
    }
}
