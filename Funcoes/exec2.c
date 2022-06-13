#include <stdio.h>

int ler_inteiros(int n[]){
    int tamanho =0, numero;

    printf("Escreva os numeros do array de inteiros\n");
    do{
        scanf("%d", &numero);
        if (numero == -1)break;
        else{
            n[tamanho] = numero;
            tamanho++;
        }
    }while(1);
    return tamanho;
}

int ler_reais(float n[]){
    int tamanho = 0;
    float numero;
    printf("Escreva os numeros do array de reaisn\n");
    while(1){
        scanf("%f", &numero);

        if(numero == -1)break;

        else{
            n[tamanho] = numero;
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

int busca_linear(int num[], int tam, int bus){
    for (int i = 0; i < tam; i++){
        if(num[i] == bus)
            return i; 
    }
    return -1;
}

int busca_binaria(int num[], int tam, int bus){
    int maiori, menori, i;

    maiori = tam -1;
    menori = 0;
    i = 0;
    while (menori <= maiori){
        i = (maiori + menori)/2;

        if(num[i] == bus){
            return i; 
        }
        
        else if(num[i] > bus){
            maiori = i-1;
        }
        else{
            menori = i+1;
        }
    }
    return -1;
}

int main(){
    float array_reais[100];
    int array_int[100], escolha, tam_reais, buscar, tam_inteiros;


        do{
            printf("Escreva qual ira usar\n(1 para inteiros, 2 para reais, 3 para buscar inteiro linear, 4 para busca inteiro binario e 9 para encerrar o programa)\n");
            scanf("%d", &escolha);
            switch(escolha){
                case 1:
                    tam_inteiros = ler_inteiros(array_int);
                    printf("O tamanho dos inteiros eh: %d\n", tam_inteiros);
                    break;
                
                case 2:
                    tam_reais = ler_reais(array_reais);
                    printf("O tamaho dos reais eh: %d\n", tam_reais);
                    printf("A media eh: %f\n", media(array_reais, tam_reais));
                    break;

                case 3:
                    printf("Escreva o numero que quer buscar\n");
                    scanf("%d", &buscar);
                    printf("O resultado da busca eh: %d", busca_linear(array_int, tam_inteiros, buscar));
                    break;

                case 4:
                    printf("Escreva o numero que quer buscar\n");
                    scanf("%d", &buscar);
                    printf("O resultado da busca foi: %d\n", busca_binaria(array_int, tam_inteiros, buscar));
                    break;

                case 9:
                    printf("O programa foi encerrado\n");
                    break;

                default: printf("nao identificado\n");
            }
        }while(escolha!=9);
    return 0;
}