#include <stdio.h>
int main(){
    int i,n[10],pos;
    for(i=0;i<9;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<9;i++){
        if(n[i]>0){
            pos=n[i];
            printf("%d",pos);
        }
    }
}
