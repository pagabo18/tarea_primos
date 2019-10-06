#include <stdio.h>
#include <stdlib.h>

typedef struct{
    node* next;
    node* factores;
    int numero;
} node;

int* genPrimes(int max){
    int* mainArr, auxArr;
    mainArr = auxArr = null;
}

void main(int argc, char const *argv[])
{
    int* lista;
    int input = -1;

    while(input){
        scanf("%d",&input);
        lista = genPrimes(input);
    }

    return EXIT_SUCCESS;
}
