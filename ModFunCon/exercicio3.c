#include <stdio.h>

int main(){
    int senha = 123;
    int resposta;

    printf("Informe a senha: ");
    scanf("%d",&resposta);

    if(senha == resposta){
        printf("Acesso liberado\n");
    }else{
        printf("Senha incorreta\n");
    }

}