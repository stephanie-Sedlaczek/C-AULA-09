#include<stdio.h>

int main(){

    float v[4] = {7.5, 8.0, 9.0};
    float soma = 0; //acumulador

    for(int i = 0; i < 4; i++) {
        soma += v[i]; //soma progressiva
    }
    printf("soma: 5.2", soma);

    return 0;
}