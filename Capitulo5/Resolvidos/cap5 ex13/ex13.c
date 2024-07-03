#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    char sexo;
    int i,tvida,ncrianca,cont24,contm,contf;
    float pm,pf,p24;
    cont24=0;
    contf=0;
    contm=0;
    printf("Digite o numero de criancas: ");
    scanf("%d",&ncrianca);
    if (ncrianca<=0){
        printf("Invalido");
    }else{
        for (i=1;i<=ncrianca;i++){
            printf("\n Digite o sexo da crianca(m ou f): ");
            scanf("%c",&sexo);
            if(sexo == 'm') {
                contm++;
            }else if(sexo == 'f') {
                contf++;
            }
            printf("Digite o tempo de vida da crianca em meses: ");
            scanf("%d",&tvida);
            if(tvida<=24){
                cont24++;
            }
        }
        pm=(contm*100)/ncrianca;
        printf("\nO Percentual de meninos que morreram eh %.2f",pm);
        pf=(contf*100)/ncrianca;
        printf("\nO Percentual de meninas que morreram eh %.2f",pf);
        p24=(cont24*100)/ncrianca;
        printf("\nO Percentual de criancas que morreram com 24 meses ou menos  eh %.2f",p24);
    }
}
