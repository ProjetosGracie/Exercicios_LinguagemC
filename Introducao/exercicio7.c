#include <stdio.h>

int main(){
    float valorProduto,valorPago,troco;

    printf("Informe o valor do produto: ");
    scanf("%f",&valorProduto);

    printf("Informe o valor pago: ");
    scanf("%f",&valorPago);

    troco = valorPago - valorProduto;

    printf("O troco fica: %.2f\n",troco);
}