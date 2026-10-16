#include <stdio.h>

int main(){
    float A,B,media;

    printf("Digite a primeira nota: ");
    scanf("%f",&A);

    printf("Digite a segunda nota: ");
    scanf("%f",&B);

    media = (A+B)/2.0;

    printf("A media do Aluno ficou: %.2f\n",media);

}