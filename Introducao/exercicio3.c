#include <stdio.h>

int main(void){
    float livros = 25;
    float canetas = 2;
    int qntd_li = 3;
    int qntd_ca = 5;
    float total = (livros*qntd_li) + (canetas*qntd_ca);
    printf("Sabendo que o usuario comprou %d livros de %2.f reais, e %d canetas de %2.f reais.\nNo total gastou %2.f reais\n",qntd_li,livros,qntd_ca,canetas,total);
}