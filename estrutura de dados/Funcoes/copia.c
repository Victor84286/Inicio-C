#include <stdio.h>

void subtrai_um(float n[], int tam){
    for(int i = 0; i< tam ; i++){
        n[i]--;   
    }
     tam--;
}

void soma_dois(float n[], int tam){
    for(int i = 0; i<tam; i++){
        n[i]+=2;   
    }
    tam+=2;
}

void imprime_valores(float n[], int tam){
    printf("\nImprime valores\n");
    for(int i = 0; i<tam; i++)
        printf("%f ", n[i]);
    
}

int main(){
    int tamanho = 10;
    float numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    subtrai_um(numeros, tamanho);
    imprime_valores(numeros, tamanho);
    printf("%d", tamanho);
    soma_dois(numeros, tamanho);
    imprime_valores(numeros, tamanho);
    printf("%d", tamanho);
}