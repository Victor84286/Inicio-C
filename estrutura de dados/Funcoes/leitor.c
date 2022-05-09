#include <stdio.h>

int ler_int(){
    int i = 0, valores[100] = {0};
    
    scanf("%d", &valores[i]);

    while(valores[i] != -1){
        i++;
        scanf("%d", &valores[i]);
    }
    return i;
}

int ler_reais(){
    int i = 0;
    float valores[100];

    scanf("%f", &valores[0]);

    while(valores[i] != -1){
        i++;
        scanf("%f", &valores[i]);
    }
    return i;
}

int main(){
    int inteiro[1000], escolha;


    printf("deseja escrever numeros inteiros ou reais?\n(1 para inteiros e 2 para reais)\n");
    scanf("%d", &escolha);

    if(escolha == 1){
        printf("A quantidade de numeros lidos foi: %d\n", ler_int());
    }
    else{
        printf("A quantidade de numeros lida foi: %d\n", ler_reais());
    }

}