#include <stdio.h>

float area_do_triangulo(float base, float altura){

    float resultado = (base * altura)/2;
    return resultado;
}

int main(void){

    float area = area_do_triangulo(5, 4);

    printf("%f\n", area);

    return 0;
}
