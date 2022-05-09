#include <stdio.h>

int main(){
    float preco, valorpago;

    printf("Escreva o preco do produto\n");
    scanf("%f", &preco);
    printf("Escreva o vaçlor entregue ao caixa\n");
    scanf("%f", &valorpago);

    if(valorpago< preco)
        printf("Nao eh suficiente para pagar pelo produto");
    else{
        printf("O valor foi suficiente\n");
        if(valorpago>preco)
            printf("O troco eh: R$ %.2f", valorpago - preco);
        else printf("Nao teve troco");
    }
    return 0;
}