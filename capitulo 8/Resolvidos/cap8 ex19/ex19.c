#include <stdio.h>
void multiplicacao(int m[][6]);
int main(){
    int m[6][6],i,j;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            m[i][j]=rand()%100;
        }
    }
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    multiplicacao(&m);
}
void multiplicacao(int m[][6]){
    int i,j,v[6];
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(i==j){
                v[i]=m[i][j];
            }
        }
    }
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            m[i][j]=m[i][j]*v[i];
        }
    }
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("%d\t",m[i][j]);
        }
         printf("\n");
    }
}
