#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int voto;
    int i, cont1, cont2, cont3, cont4, cont5, cont6;
    float por_nulos, por_branco;

    cont1 = 0;
    cont2 = 0;
    cont3 = 0;
    cont4 = 0;
    cont5 = 0;
    cont6 = 0;
    i = 0;

    printf("CALCULO DE VOTOS \n");
    printf("Canditatos: \n 1,2,3,4; Nulo: 5; \n Voto em branco: 6 \n\n");
    printf("Digite 0 para sair. \n\n");

    do {
        printf("    Digite sua op��o: ");
        scanf("%d", &voto);

        //Contagem de votos

            if (voto == 0) {
                break;
            }else if(voto == 1) {
                cont1++;
                 i++;
            } else if (voto == 2) {
                cont2++;
                 i++;
            } else if (voto == 3) {
                cont3++;
                 i++;
            } else if (voto == 4) {
                cont4++;
                 i++;
            } else if (voto == 5) {
                cont5++;
                 i++;
            } else if (voto == 6) {
                cont6++;
                 i++;
            }else  {
                printf("Op��o inv�lida. \n");
        }
    } while (voto != 0);

    por_nulos = cont5 * 100 / i;
    por_branco = cont6 * 100 / i;

    printf("\n");
    printf("CONTAGEM DE VOTOS \n");
    if (i > 0) {
        printf("    Canditato 1: %d \n", cont1);
        printf("    Canditato 2: %d \n", cont2);
        printf("    Canditato 3: %d \n", cont3);
        printf("    Canditato 4: %d \n", cont4);
        printf("    Votos nulos: %d \n", cont5);
        printf("    Votos em branco: %d \n ", cont6);
        printf("    Porcentagem de votos em branco: %.2f %% \n", por_branco);
        printf("    Porcentagem de votos em nulos: %.2f %% \n", por_nulos);
    } else {
        printf("Nenhum voto digitado. \n");
    }

    return (EXIT_SUCCESS);
}
