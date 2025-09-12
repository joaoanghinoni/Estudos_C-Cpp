#include <stdio.h>

int exponencial(int numero){

    int quadrado = numero * numero;

    return quadrado;
}

int main(void){

    int resultado = exponencial(6);
    printf("%d\n", resultado);

    return 0;
}
