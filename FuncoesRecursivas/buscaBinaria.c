#include <stdio.h>

int busca_binaria(int num[], int tam, int bus, int posini){
    int maiori, menori, i;

    maiori = tam -1;
    menori = posini;
    i = 0;
    i = (maiori + menori)/2;

    if(num[i] == bus){
        return i; 
    }
    else if(num[i] > bus)
        busca_binaria(num, i-1, bus, posini);
    else if(num[i] < bus)
        busca_binaria(num, tam, bus, i+1);
    else if(maiori == menori)
        return -1;
}

int main(){
    int n[20], tam, buscar;

    printf("Escreva quantos numeros vao ter no array\n");
    scanf("%d", &tam);

    printf("Escreva os numeros que vao estar no array\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &n[i]);
    }

    printf("Escreva o numero que quer buscar\n");
    scanf("%d", &buscar);
    
    printf("%d", busca_binaria(n, tam, buscar, 0));
}