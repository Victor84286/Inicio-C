#include <stdio.h>

int main(){
    float nota;
    printf("Escreva a nota do aluno\n");
    scanf("%f", &nota);
    if (nota<5)
        printf("Insuficiente\n");
    else if(nota<7)
        printf("Regular\n");
    else if(nota<9)
        printf("Bom\n");
    else
        printf("Excelente\n");

    printf("Situacao: ");
    if(nota<5)
        printf("reprovado");
    else
        printf("aprovado");
    return 0;
}