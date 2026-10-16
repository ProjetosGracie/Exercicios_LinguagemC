#include <stdio.h>
#include <stdbool.h>

int main(){
    bool tem_agua = true;
    bool tem_capsula = false;

    if(tem_agua && tem_capsula){
        printf("Pode fazer o cafezin\n");
    }else{
        printf("Nao pode fazer p cafezin\n");
    }
}