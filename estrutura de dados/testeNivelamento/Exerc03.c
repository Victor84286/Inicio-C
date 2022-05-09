#include <stdio.h>

int main(){
    int limInf, limSup;

    printf("Escreva o limite inferior\n");
    scanf("%d", &limInf);
    printf("Escreva o limite superior\n");
    scanf("%d", &limSup);
    
    for(int i = limInf +1; i<limSup; i++){
        printf("%d", i);
        if(i<limSup-1)
            printf(", ");
    }
    return 0;
}