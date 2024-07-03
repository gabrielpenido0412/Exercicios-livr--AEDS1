#include <stdio.h>
void soma(int x,int y);
int main(){
    int x,y,result;
    //le e chama
    do{
        do{
                scanf("%d",&x);
            scanf("%d",&y);
            if (x > y) {
                printf("X precisa ser menor que Y. \n\n");
            } else if (x == y) {
                printf("Programa encerrado. \n\n");
            } else {
                soma(x, y);

            }

        }while(x<y);
    }while(x!=y);
}
void soma (int x, int y){
    int i,s=0,j,cont;
    for(i=x;i<=y;i++){
            cont=0;
        for(j=1;j<=i;j++){
            if((i%j)==0){
                cont++;
            }
        }
    }
    for(i=x;i<=y;i++){
        if(cont<=2){
            s+=i;
        }
    }
    printf("%d",s);

}
