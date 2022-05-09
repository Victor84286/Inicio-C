#include <stdio.h>

int main(){
    
    long int numero, fatorial, i;
    
    i = fatorial = 1;
    
    printf("Escreva o numero que sera fatorado ");
    scanf("%ld", &numero);
    
    while(i <= numero){
        printf("%ld*", i);
        fatorial = fatorial*i;
        
        i++;    
    }
    
    printf("\nO fatorial e: %ld", fatorial);

    return 0;
}