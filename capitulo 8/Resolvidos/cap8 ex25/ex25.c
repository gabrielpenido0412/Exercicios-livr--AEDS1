#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void SubstituirValores(int a[],int ar[]);

int main() {
    int i, a[25],ar[25];
    srand(time(NULL));


    for (i = 0; i < 25; i++) {
        a[i]=((rand()%50)-25);
    }
    for(i=0;i<25;i++){
        printf("%d |",a[i]);
    }
    SubstituirValores(&a,&ar);

    printf("\n\nVetor alterado: ");
    for (i = 0; i < 25; i++) {
        printf("%d |", ar[i]);
    }
    printf("\n");

}

void SubstituirValores(int a[],int ar[]) {
    int i;

    for (i = 0; i <25; i++) {
        if (a[i] < 0) {
            ar[i] = 0;
        }else{
            ar[i]=a[i];
        }
    }
}
