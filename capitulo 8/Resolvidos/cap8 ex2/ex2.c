#include <stdio.h>
int soma (int,int);
int main(){
    int x,y,result;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x<0 || y<0){
        printf("Erro");
    }else{
        result=soma(x,y);
        printf("%d",result);
    }
}
int soma(int x, int y){
    int sum=0;
    if(x<y){
        for(int i=x+1;i<y;i++){
            sum+=i;
        }
        return sum;
    }else{
         for(int i=y+1;i<x;i++){
            sum+=i;
        }
        return sum;
    }

}
