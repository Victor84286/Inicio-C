#include <stdio.h>

int main(void){

    int i = 0;
    float soma =0, contador =0, media;
    float notas[10];

    while(i >= 9 && notas[i] != (-1)){
        scanf("%f", &notas[i]);
        if(notas[i]!=(-1))
           soma += notas[i];
        i++;
    }

    for(i = i; i >= 0; i--){
        printf("%.2f, ", notas[i]);
    }
    if(i != 10){
        media = (soma +1)/i;
    }
    else{
        media = soma /10;
    }
    printf("A media e: %f", media);
}