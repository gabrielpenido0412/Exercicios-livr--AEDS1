

#include <stdio.h>
#include <stdlib.h>
int main() {
    int m1[6][4], m2[6][4];
    int i, j, cont = 0;
    printf("1º Matriz \n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            printf("Valor da posicao: ");
            scanf("%d", &m1[i][j]);
        }
    }
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            if(m1[i][j]>30){
                cont++;
            }
        }
    }
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            if(m1[i][j]==30){
                m2[i][j]==0;
            }
        }
    }
    printf("%d",cont);
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d \t ",m2[i][j]);
        }
        printf("\n");
    }
}
