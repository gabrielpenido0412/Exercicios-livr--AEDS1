#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float vlr_ingresso, lucro;
    int quant_ingresso;
    int i;

    vlr_ingresso = 5, 00;
    quant_ingresso = 120;

    printf("FUN��O QUE CALCULA O LUCRO: F(x) = VALOR * QUANTIDADE - 200 \n\n ");

    printf("VALOR INGRESSO: R$ %.2f. \n", vlr_ingresso);
    lucro = quant_ingresso * vlr_ingresso - 200;
    printf("    Lucro: R$ %.2f. \n", lucro);
    printf("------------------------------------------------------------------\n");

    for (i = 5; i <= 12; i++) {
        /* Sabendo que cada diminui��o de R$ 0,50 centavos aumenta 26 o n�mero de ingressos
         aumenta 26 basta fazer: */

        vlr_ingresso = vlr_ingresso - 0.5;
        quant_ingresso = quant_ingresso + 26;
        printf("VALOR INGRESSO: R$ %.2f. \n", vlr_ingresso);
        lucro = quant_ingresso * vlr_ingresso - 200;
        printf("    Lucro: R$ %.2f. \n", lucro);
        printf("--------------------------------------------------------------- \n");
    }

    return (EXIT_SUCCESS);
}
