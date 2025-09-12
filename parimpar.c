#include <stdio.h>

int par_impar(int numero){

    if(numero % 2 == 0)
        return 1;
    else if(numero % 2 == 1)
        return 0;
}

int main(void){

    int num = 10;

    if(par_impar(num))
        printf("O numero %d\n é par", num);
    else
        printf("o numero %d\n é impar", num);



    return 0;
}
