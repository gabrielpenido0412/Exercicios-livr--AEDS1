#include <stdio.h>
int sinal(int);
int main (){
    int n,result;
    scanf("%d",&n);
    result=sinal(n);
    printf("%d",result);
}
int sinal(int n){
    if(n<0){
        return 0;
    }else{
        return 1;
    }
}
