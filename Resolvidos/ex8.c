#include <stdio.h>
int main(){
    int n1,n2,n3,ntermo,i;
    scanf("%d",&ntermo);
    n1=2;
    n2=7;
    n3=3;
    i=4;
    while(i!=ntermo){
        n1=n1*2;
        printf("\n%d",n1);
        i++;
        if(i!=ntermo){
            n2=n2*3;
            printf("\n%d",n2);
            i++;
        }else{
            if(i!=ntermo){
            n3=n3*4;
            printf("\n%d",n3);
            i++;
        }
     }
    }
}
