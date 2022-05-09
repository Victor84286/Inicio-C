#include <stdio.h>

int ler_inteiros(int n[]){
    int tamanho =0, numero, contador = 0;

    do{
        scanf("%d", &numero);
        if (numero == -1)break;
        else{
            n[contador++] = numero;
            tamanho++;
        }
    }while(1);
    return tamanho;
}

int ler_reais(float n[]){
    int tamanho = 0, contador = 0;
    float numero;
    while(1){
        scanf("%f", &numero);

        if(numero == -1)break;

        else{
            n[contador] = numero;
            contador++;
            tamanho++;
        }
    }
    
    return tamanho;
}

float media(float n[], int tamanho){
    float soma = 0;

    for(int i = 0; i<tamanho; i++){
        soma += n[i];
    }
    return (soma/tamanho);
}

int main(){
    float array_reais[100];
    int array_int[100], escolha, tam_reais;


        do{
            printf("Escreva qual ira usar\n(1 para inteiros, 2 para reais e 9 para encerrar o programa)\n");
            scanf("%d", &escolha);
            switch(escolha){
                case 1: printf("O tamanho dos inteiros eh: %d\n", ler_inteiros(array_int)); break;
                
                case 2: tam_reais = ler_reais(array_reais);
                    printf("O tamaho dos reais eh: %d\n", tam_reais);
                    printf("A media eh: %f\n", media(array_reais, tam_reais)); break;

                case 9: printf("O programa foi encerrado\n"); break;
                default: printf("nao identificado\n");
            }
        }while(escolha!=9);
    return 0;
}