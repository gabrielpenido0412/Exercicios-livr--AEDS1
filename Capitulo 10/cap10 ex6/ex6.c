#include <stdio.h>
#include <stdlib.h>
#define FUNC 2

typedef struct {
    char nome[40];
    float vendas[3];
} Dados;

Dados Funcionarios[FUNC];

//Função para cadastrar os funcionarios
void Cadastro(Dados *Funcionarios);

//Função para calcular os pontos
void Calcular_Pontos_Individual(Dados *Funcionarios, float *pontos);

//Função para imprimir pontos
void Imprimir_Pontos_individual(Dados *Funcionarios, float  *pontos);
void pontuacao_geral(Dados *Funcionarios);
//Função para calcular o total vendido
float Calcular_Total(Dados *Funcionarios);


int main() {
    float pontos[FUNC];

    Cadastro(Funcionarios);

    Calcular_Pontos_Individual(Funcionarios, pontos);

    Imprimir_Pontos_individual(Funcionarios, pontos);
    pontuacao_geral(Funcionarios);
    printf("Total arrecado: R$ %.2f \n",Calcular_Total(Funcionarios));

    return (EXIT_SUCCESS);
}
//------------------------------------------------------------------------------

void Cadastro(Dados *Funcionarios) {
    int i, j;

    for (i = 0; i < FUNC; i++) {
        printf("%dº Funcionário \n", i + 1);
        printf("\tNome: ");
        setbuf(stdin, NULL);
        gets(Funcionarios[i].nome);

        for(j=0;j<3;j++){
            printf("\tVendas do mês : ");
            scanf("%f", &Funcionarios[i].vendas[j]);
        }

    }
}
//------------------------------------------------------------------------------

void Calcular_Pontos_Individual(Dados *Funcionarios, float *pontos) {
    int i, j;
    float soma,p;

    for (i = 0; i < FUNC; i++) {

        soma=0;
        for (j = 0; j < 3; j++) {
            soma += Funcionarios[i].vendas[j];
        }

         p= soma / 100; //Contagem de pontos
        pontos[i] = p;
    }
}
//------------------------------------------------------------------------------

void Imprimir_Pontos_individual(Dados *Funcionarios, float *pontos) {
    float maior=pontos[0];
    int ind=0;
    int i,j;
    printf("\nPontuação individual de cada funcionário: \n");
    for (i = 0; i < FUNC; i++) {
        printf("\t%s: %.2f pontos. \n", Funcionarios[i].nome, pontos[i]);

        //DEterminar a maior pontuação
        if (pontos[i] > maior) {
            maior = pontos[i];
            ind = i;
        }
    }


    printf("A maior pontuação foi do funcionário %s que marcou %.2f pontos. \n", Funcionarios[ind].nome, maior);
}
//------------------------------------------------------------------------------
void pontuacao_geral(Dados*Funcionarios){
    float soma,pontos;
    for(int j=0;j<3;j++){
        soma=0;
        for(int i=0;i<FUNC;i++){
            soma+=Funcionarios[i].vendas[j];
        }
        pontos=soma/100;
        printf("A pontuacao geral do mes eh: %.2f",pontos);
    }
}
float Calcular_Total(Dados *Funcionarios) {
    float total = 0;
    int i, j;

    for (i = 0; i < FUNC; i++) {
        for (j = 0; j < 3; j++) {
            total += Funcionarios[i].vendas[j];
        }
    }

    return total;
}
