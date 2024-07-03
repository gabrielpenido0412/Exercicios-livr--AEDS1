#include<stdio.h>
int main(){
    float s,ns,c,aumento;
    printf("Digite seu codigo de cargo");
    scanf("%f",&c);
    printf("Digite seu salario");
    scanf("%f",&s);
    if (c==1){
        aumento= s*0.5;
        ns= s+aumento;
        printf("O aumento eh de %.2f",aumento);
        printf("\n O cargo eh escrituario e o novo salario eh %.2f",ns);
    }else{
        if (c==2){
        aumento= s*0.35;
        ns= s+aumento;
        printf("O aumento eh de %.2f",aumento);
        printf("\n O cargo eh secretario e o novo salario eh %.2f",ns);
        }else{
            if (c==3){
                aumento= s*0.2;
                ns= s+aumento;
                printf("O aumento eh de %.2f",aumento);
                printf("\n O cargo eh Caixa e o novo salario eh %.2f",ns);
                }else{
                    if (c==4){
                        aumento= s*0.1;
                        ns= s+aumento;
                        printf("O aumento eh de %.2f",aumento);
                        printf("\n O cargo eh gerente e o novo salario eh %.2f",ns);
                    }else{
                        if (c==5){
                            printf("Nao tem aumento");
                            printf("\n O cargo eh escrituario e o salario eh %.2f",s);
                        }else{
                            printf("Codigo invalido");
                        }
                    }

                }
            }

    }
     return 0;
}
