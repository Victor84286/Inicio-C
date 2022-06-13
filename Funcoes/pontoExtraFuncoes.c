#include <stdio.h>

void alterar(int num[], int pos, int n){
    num[pos] = n;
}

void adicionar(int num[], int tamanho, int posicao, int n){
    for(int i = tamanho; i>=posicao; i--){
        num[i+1] = num[i];
        if(i == posicao)
            num[i] = n;
    }
}

void retirar(int n[], int tamanho, int retirador){
    for (int i = retirador; i <= tamanho; i++){
        n[i] = n[i+1];
    }
}

int main(){

    int escolha = 0, tam, num[100], pos, n;
    
    printf("Escreva quantos numeros deseja escrever no array\n");
    scanf("%d", &tam);

    printf("Escreva os numeros\n");
    for(int i = 0; i<tam; i++){
        scanf("%d", &num[i]);
    }

    do{
        printf("\n\nEscolha o que deseja realizar\n(1 para adicionar um valor, 2 para retirar um valor, 3 para alterar um valor e 9 para encerrar o programa)\n");
        scanf("%d", &escolha);

        switch (escolha) {
        case 1:
            printf("Escreva a posicao em que deseja adicionar\n");
            scanf("%d", &pos);
            printf("Escreva o numero que deseja adicionar\n");
            scanf("%d", &n);
            
            adicionar(num, tam, pos, n);
            
            tam++;

            for(int i = 0; i<tam; i++){
            printf("%d", num[i]);
            if(i<tam-1)
                printf(", ");
            }
            break;

        case 2:
            printf("Escreva a posicao que deseja retirar\n");
            scanf("%d", &pos);

            retirar(num, tam, pos);

            tam--;

            for(int i = 0; i<tam; i++){
                printf("%d", num[i]);
                if(i<tam-1)
                    printf(", ");
            }
            break;

        case 3:
            printf("Escreva a posicao que deseja alterar\n");
            scanf("%d", &pos);
            printf("Escreva o numero para o qual deseja alterar\n");
            scanf("%d", &n);

            alterar(num, pos, n);

            for(int i = 0; i<tam; i++){
                printf("%d", num[i]);
                if(i<tam-1)
                    printf(", ");
            }
            break;

        case 9:
            printf("O programa foi encerrado\n");
            break;

        default:
            break;
        }
    }while(escolha != 9);
    return 0;
}