//soma,media,maior,menor,mediapar,porcentagemimpar
#include <stdio.h>
int main(){
    int i,num,soma,maiornum,menornum,cont,contpar,somapar,contimpar;
    float media,mediapar,porcentagemimpar;
    soma=0;
    somapar=0;
    cont=0;
    contpar=0;
    contimpar=0;
    maiornum=1;
    menornum=999999;
    do{
      printf("Digite um numero: ");
        scanf("%f",&num);
        cont++;
        soma=soma+num;
        if(num % 2 ==0){
            contpar++;
            somapar=somapar+num;
        }else{
            contimpar++;
        }
        if(num>maiornum){
            maiornum=num;
        }else {
            if(num<menornum){
                menornum=num;
            }
        }
    } while(num!=30000);

    printf("A soma eh %d",soma);
    media=soma/cont;
    printf("A media eh %.2f",media);
    printf("O maior numero eh %d",maiornum);
    printf("O menor numero eh %d",menornum);
    mediapar=somapar/contpar;
    printf("A media dos pares eh %f",mediapar);
    porcentagemimpar=contimpar *100/cont;
    printf("A porcentagem dos impars eh %.2f",porcentagemimpar);
}
