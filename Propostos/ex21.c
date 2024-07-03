#include <stdio.h>
int main(){
    int i,n1[10],n2[10];
    for (i=0;i<10;i++){
        scanf("%d",&n1[i]);
        n2[i]=n1[i];
    }
    for (i=0;i<10;i++){
        if(n2[i]==0){
            n2[i]=1;
        }
    }
    for (i=0;i<10;i++){
        printf("%d |",n1[i]);
    }
    for (i=0;i<10;i++){
        printf("%d |",n2[i]);
    }

}
