#include <stdio.h>
int main(){
    int a,b,soma;
    a=0;
    b=1;
    //Como o a e o b j� est�o ocupando um valor, come�amos a imprimir a partir do terceiro termo
    for(int i=3;i<=8;i++){
        soma=a+b;
        printf( "%d",soma);
        a=b;
        b=soma;
    }
}
