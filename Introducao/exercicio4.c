#include <stdio.h>

int main(void){
    float km = 150;
    float vel = 60;
    float total = km/vel;
    printf("O Carro andou %2.f KM em uma velocidade de %2.f km/h.\nO Carro levou %2.f horas para percorrer todo o percurso\n",km,vel,total);
}