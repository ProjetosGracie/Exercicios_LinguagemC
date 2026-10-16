#include <stdio.h>

int main(void){

    float pi = 3.14;
    float  raio = 5.0;
    float area = pi*(raio*raio);
    printf("Calculando a circunferencia:\nO raio é: %2.f\nO PI utilizado é: %2.f\nEntao a area é: %.2f\n",raio,pi,area);
}

