#include <stdio.h>
int main(){
    int i,n[15],maior,ind;
    float div[15];
    for(i=0;i<15;i++){
        scanf("%d",&n[i]);
    }
    maior=n[0];
    ind=0;
    for(i=0;i<15;i++){
        if(maior<n[i]){
            maior=n[i];
            ind=i;
        }
    }
    for(i=0;i<15;i++){
        n[i]=n[i]/maior;
        printf("%d",n[i]);
    }
}
