#include <stdio.h>
int main(){
    int i,A[5],B[5],C[5];
    for(i=0;i<5;i++){
            printf("Vetor A: ");
        scanf("%d",&A[i]);
    }
    for(i=0;i<5;i++){
        printf("Vetor B: ");
        scanf("%d",&B[i]);
    }
    for(i=0;i<5;i++){
        C[i]=B[4-i]-A[i];
    }
    for(i=0;i<5;i++){
        printf("%d| ",C[i]);
    }
}
