#include <stdio.h>

int exponencial(int numero){

    int quadrado = numero * numero;

    return quadrado;
}

int main(void){

    int num = 0;
    printf("Digite o numero que voce deseja calcular o quadrado: ");
    scanf("%d", &num);
    printf("\n");

    int resultado = exponencial(num);
    printf("%d\n", resultado);

    return 0;
}
