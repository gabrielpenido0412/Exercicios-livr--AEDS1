#include<stdio.h>
#include <string.h>
int main(){
    int cont=0,i;
    char frase[50];
    fgets(frase,50,stdin);
    int tam=strlen(frase);
    for(i=0;i<tam;i++){
        if(frase[i]=='a'||frase[i]=='A'||frase[i]=='e'||frase[i]=='E'||frase[i]=='i'||frase[i]=='I'||frase[i]=='o'||frase[i]=='O'||frase[i]=='u'||frase[i]=='U'){
            cont++;
        }
    }
    printf("%d",cont);
}
