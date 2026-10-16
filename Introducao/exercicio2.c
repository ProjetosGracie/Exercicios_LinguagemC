#include <stdio.h>

int main(void){

    float F;
    float C = ((F - 32.0)*5.0)/9.0;
    
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f",&F);

    printf("Usando a formula: ((F - 32.0)*5.0)/9.0, podemos converter para Celcius que fica: %2.f C\n",C);
}