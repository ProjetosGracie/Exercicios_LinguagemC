#include <stdio.h>

int main(){
    int numero1,numero2;

    printf("Digite um numero: ");
    scanf("%d",&numero1);
    printf("Digite um numero: ");
    scanf("%d",&numero2);
   
 if(numero1 != 0 && numero2 != 0){
    if(numero1 % numero2 == 0 || numero2%numero1==0){
        printf("Os numeros %d e %d, São multiplos",numero1,numero2);
    }else{
        printf("Os numeros %d e %d, Não sao multiplos",numero1,numero2);
    }
 }else{
    printf("Digite um numero diferente de zero");
 }
}