#include <stdio.h>

int verifica_multiplo(int m, int n){

    if(m%n == 0)
        return 1;
    else
        return 0;
}

int main(void){

    int m = 10;
    int n = 3;

    int result = verifica_multiplo(m, n);

    if(result == 1)
    printf("%d É multiplo de %d\n", m, n);

    else
    printf("%d não é multiplo de %d\n", m, n);








    return 0;
}
