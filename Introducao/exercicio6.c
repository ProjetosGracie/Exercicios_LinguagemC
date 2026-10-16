#include <stdio.h>

int main(){
    float A,B,media;
    int p1 = 4, p2 = 6;
    printf("Digite a primeira nota: ");
    scanf("%f",&A);

    printf("Digite a segunda nota: ");
    scanf("%f",&B);

    media = ((A*p1)+(B*p2))/(p1+p2);

    printf("A media do Aluno ficou: %.2f\n",media);

}