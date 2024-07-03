#include <stdio.h>
int main(){
    float salario,novosalario,percentual;
    int i=1,ano;
    salario=1000;
    percentual=1.5/100;
    novosalario=(percentual*salario)+salario;
    printf("Digite um ano");
    scanf("%d",&ano);
    for(i=2007;i<=ano;i++){
        percentual= 2*percentual;
        novosalario= (percentual*novosalario)+novosalario;
        printf("O salario atual eh %.2f",novosalario);
    }
}

