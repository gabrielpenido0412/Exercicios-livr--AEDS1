#include <stdio.h>
int main(){
    int idade,somasal,cont,maior,menor,menorsal,idademenorsal;
    float sal,mediasal;
    cont=0;
    maior=0;
    menor=0;
    menorsal=0;
    menor=999;
    maior=0;
    menorsal=0;
    do{
        printf("Digite a idade: ");
        scanf("%d",&idade);
        if(idade<0){
            break;
        }
        printf("Digite o salario:");
        scanf("%f",&sal);
        if(maior<idade){
            maior=idade;
        }
        if(menor>idade){
            menor=idade;
        }
        if(menorsal>sal){
            menorsal=sal;
            idademenorsal=idade;
        }
        somasal+=sal;
        cont++;
    }while(idade>0);
    mediasal=somasal/cont;
    printf("\n%.2f",mediasal);
    printf("\n%d",maior);
    printf("\n%d",menor);
    printf("\n%d",idademenorsal);
}
