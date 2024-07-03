#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define t 2
#define p 2
typedef struct titulo{
    int cod_titulo;
    char desc[50];
    float valor_hora;

}titulo;
typedef struct professores{
    int num;
    char nome[50];
    titulo cod;
    float total_hora;
    float total_geral;
}professores;
titulo dado_titulo[t];
professores prof[p];

void cadastro_titulo(titulo *dado_titulo){
    int i;
    printf("Titulos: ");
    for(i=0;i<t;i++){

        scanf("%d",&dado_titulo[i].cod_titulo);

        scanf("%f",&dado_titulo[i].valor_hora);

        gets(dado_titulo[i].desc);
    }
}

void cadastro_professores(professores *prof){
    printf("Professores: ");
    int i;
    for(i=0;i<p;i++){

        scanf("%d",&prof[i].num);

        scanf("%f",&prof[i].cod.cod_titulo);
        scanf("%f",&prof[i].total_hora);
        gets(prof[i].nome);
    }
}
void relacao (professores *prof, titulo *dado_titulo){
    int i;
    for(i=0;i<p;i++){
        prof[i].total_geral= prof[i].total_hora * dado_titulo[i].valor_hora;
        printf("%s\n",prof[i].nome);
        printf("%s\n",dado_titulo[i].desc);
        printf("%.2f\n",dado_titulo[i].valor_hora);
        printf("%f\n",prof[i].total_hora);
        printf("%.2f\n",prof[i].total_geral);
    }
}
int main(){
    cadastro_titulo(dado_titulo);
    cadastro_professores(prof);
    relacao(prof,dado_titulo);
}
