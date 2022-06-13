#include <stdio.h>

float soma(float a, float b){
    return (a+b);
}

int quad(int q){
    return (q*q);
}

float media(float a, float b){
    return ((a+b)/2);
}

int main(){

    float a, b;
    int q;
    
    scanf("%f %f", &a, &b);
    scanf("%d", &q);
    printf("%f\n", soma(a, b));
    printf("%d\n", quad(q));
    printf("A media eh: %f\n", media(a, b));
    return 0;
}

