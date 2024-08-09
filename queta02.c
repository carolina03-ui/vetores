#include <stdio.h>

int main( ){
    int vetor[10];
    int pares = 0;

    printf("digite 10 números inteiros:\n");

    for(int i=0; i<10; i++){
        scanf("%d", &vetor [i]);
    } 
    for(int i=0; i<10; i++){
        if(vetor [i]%2 == 0){
            pares++;
        }
    }

    printf("Quantidade de pares no vetor: %d\n", pares);

    return 0;
}