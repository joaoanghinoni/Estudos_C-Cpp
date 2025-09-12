#include <stdio.h>

int soma(int v[], int n){

    int total = 0;
    for(int i = 0; i < n; i++){
        total += v[i];
    }

    return total;
}

float calculo_media(int v[], int n){

    float total = soma(v, n);

    return (float)total/n;
}

int main(void){

    int a[5];

    for(int i = 0; i < 5; i++){
     scanf("%d", &a[i]);
    }

    int result = soma(a, 5);
    int media = calculo_media(a ,5);

    printf("%d\n", result);
    printf("%d\n", media);

    return 0;
}
