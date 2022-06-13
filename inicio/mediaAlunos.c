#include <stdio.h>

int main(void){
    int definidor, j = 1;
    float soma = 0, media;

    printf("\nEscreva quantos alunos possuem na turma\n");
    scanf("%d", &definidor);

    float notas[definidor];

    for(int i = 0; i < definidor; i++){
        printf("\nEscreva a nota do %d aluno\n", j);
        scanf("%f", &notas[i]);
        soma += notas[i];
        j++;
    }

    media = soma/definidor;
    printf("A media das notas eh: %.2f", media);

    return 0;
}