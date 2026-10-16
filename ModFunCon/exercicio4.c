#include <stdio.h>

int main(){

    int numero;

    printf("Informe um numero: ");
    scanf("%d",numero);

    if(numero > 0){
        printf("Numero Positivo\n");
    }else if(numero<0){
        printf("Numero Negativo\n");
    }else{
        printf("Numero Nulo\n");
    }

}