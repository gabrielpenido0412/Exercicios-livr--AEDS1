#include <stdio.h>
int main(){
    int A[10],B[10],i,cont;
    cont=0;
    for(i=0;i<10;i++){
        scanf("%d",&A[i]);
        if( (A[i]!=0) &&(A[i]>0)){
            B[cont]=A[i];
            cont++;
        }
    }
    for(i=0;i<cont;i++){
        printf("%d |",B[i]);
    }
}
