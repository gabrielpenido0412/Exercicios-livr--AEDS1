#include <stdio.h>
int main(){
    int n=5;
    int i,cod;
    float vet[n];
    for(i=0;i<n;i++){
        scanf("%f",&vet[i]);
    }
    printf("Digite o codigo: ");
    scanf("%d",&cod);
    for(i=0;i<n;i++){
        switch(cod){
            case 0:
                printf("\n Progama encerrado");
            case 1:
                printf("Ordem direta: ");
                for (i = 0; i < n; i++) {
                    printf("%.1f | ", vet[i]);
            }
            break;

            case 2:
                printf("Ordem inversa: ");
                for (i = 4; i >=0; i=i-1) {
                    printf("%.1f | ", vet[i]);
                }
                break;

            default:
                printf("\nOpção invalida. \n");
                break;
        }


    }

}
