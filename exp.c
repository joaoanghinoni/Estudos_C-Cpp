#include <stdio.h>

int exponencial(int numero){

    int cubo = numero * numero * numero;

    return cubo;
}



int main(void){

    int num = 0;
    printf("Digite o numero que voce deseja calcular o cubo: ");
    scanf("%d", &num);
    printf("\n");

    int resultado = exponencial(num);

    printf("%d\n", resultado);

    return 0;
}
