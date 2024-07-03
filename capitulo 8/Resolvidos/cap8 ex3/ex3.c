#include <stdio.h>
int soma(int,int,int);
int main(){
    int a,b,c,result;
    scanf("%d",&a);
    if(a<1){
        printf("ERRO");
    }else{
        scanf("%d",&b);
        scanf("%d",&c);
        result=soma(a,b,c);
        printf("%d",result);
    }
}
int soma(int a,int b,int c){
    int i,sum=0;
    if(b>c){
        for(i=c;i<=b;i++){
            if((i%a)==0){
                sum+=i;
            }
        }
      return sum;
    }else{
        for(i=b;i<=c;i++){
            if((i%a)==0){
                sum+=i;
            }
        }
      return sum;
    }
}
