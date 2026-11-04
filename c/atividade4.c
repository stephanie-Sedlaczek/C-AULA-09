#include<stdio.h>

int main(){
    int v[5] = {3, 15, 8, 22, 7};
    int ativo = 8, achou =0;

    for (int i = 0; i < 5; i++) {
        if (v[i] == ativo)
        achou = 1;
        printf("o ativo eh: %d (eencontrado na posicao %d)\n", v[i], i);
        break; //interrompe a busca
        {

        }
        
    }

    if (!achou) {
        printf("O alvo %d nao foi encontrado no vetor. \n", ativo);
    }

    return 0;
}