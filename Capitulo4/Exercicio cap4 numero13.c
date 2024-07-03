#include <stdio.h>
#include <locale.h>
int main(){
    int op;
    float salario,novosalario,imposto;
    setlocale(LC_ALL, "portuguese-brazilian");
    printf("Menu de opcoes\n 1-Imposto \n 2-Novo salario \n 3-Classificacao ");
    printf("\n Digite uma opção: ");
    scanf("%d",&op);
    switch(op){
        case 1:
            printf("Digite seu salario:");
            scanf("%f",&salario);
            if(salario<500){
                imposto=salario *0.05;
                printf("O valor do imposto é: %.2f",imposto);
            }else{
                imposto=salario *0.1;
                if((salario>=500 && salario<=850)){
                    printf("O valor do imposto é: %.2f",imposto);
                   }else{
                        imposto= salario *0.15;
                        printf("O valor do imposto é: %.2f",imposto);
                   }
            }break;
        case 2:
            printf("Digite seu salario:");
            scanf("%f",&salario);
            if(salario>1500){
                novosalario= salario+25;
                printf("O novo salario é %.2f",novosalario);
            }else{
                if((salario>=750 && salario <=1500)){
                    novosalario= salario+50;
                    printf("O novo salario é %.2f",novosalario);
                }else{
                    if(salario>=450 && salario<=750){
                        novosalario= salario+75;
                        printf("O novo salario é %.2f",novosalario);
                    }else{
                        novosalario= salario+100;
                        printf("O novo salario é %.2f",novosalario);
                    }
                }
            }
            break;
        case 3:
            printf("Digite seu salario:");
            scanf("%f",&salario);
            if(salario<=700){
                printf("Sua categoria é mal remunerado");
            }else{
                printf("Sua categoria é bem remunerado");
            }
            break;
        default:{
            printf("Opção invalida");
        }
    }

}
