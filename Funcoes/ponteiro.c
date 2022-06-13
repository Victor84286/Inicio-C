#include <stdio.h>
#define Pi 3.14

float area(float R){
    return (Pi*R*R);
}

int main() {
    float raio;

    printf("Escreva o raio \n(-1 para parar o codigo)\n");
    scanf("%f", &raio);

    while(raio!=-1){
        printf("A area do circulo eh: %f\n", area(raio));

        printf("Escreva o raio \n(-1 para parar o codigo)\n");
        scanf("%f", &raio);

    }

    return 0;
}