#include <stdio.h>
int main(){
    int t=20;
    int n1,n2,n3,n4,n5,n6,i,d[t];
    for (i=0;i<t;i++){
        scanf("%d",&d[i]);
        while(d[i]<0 || d[i]>6){
             scanf("%d",&d[i]);
        }
    }
    for (i=0;i<t;i++){
        printf("%d",d[i]);
    }
    n1=0;
    n2=0;
    n3=0;
    n4=0;
    n5=0;
    n6=0;
    for(i=0;i<t;i++){
        switch (d[i]){
            case 1:
                n1++;
                break;
            case 2:
                n2++;
                break;
            case 3:
                n3++;
                break;
            case 4:
                n4++;
                break;
            case 5:
                n5++;
                break;
            case 6:
                n6++;
                break;
        }
    }
    printf("\nO numero 1 foi sorteado %d vezes",n1);
    printf("\nO numero 2 foi sorteado %d vezes",n2);
    printf("\nO numero 3 foi sorteado %d vezes",n3);
    printf("\nO numero 4 foi sorteado %d vezes",n4);
    printf("\nO numero 5 foi sorteado %d vezes",n5);
    printf("\nO numero 6 foi sorteado %d vezes",n6);
}
