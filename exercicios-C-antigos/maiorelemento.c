#include <stdio.h>

int maior_elemento(int v[], int n){

    int maior = v[0];

    //verifica maior valor do vetor
    for(int i =1; i < n; i++){
        if(v[i] > maior)
            maior = v[i];
    }

    return maior;
}

int menor_elemento(int v[], int n){

    int menor = v[0];

    for(int i = 1; i < n; i ++){
        if(v[i] < menor)
            menor = v[i];
    }
    return menor;
}


int main(void){

     int vetor[5];


     for(int i = 0; i < 5; i++){
      scanf("%d", &vetor[i]);
    }


    int maior = maior_elemento(vetor, 5);
    int menor = menor_elemento(vetor, 5);

    printf("\n%d\n", maior);
    printf("\n%d\n", menor);

    return 0;
}
