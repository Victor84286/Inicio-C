#include <stdio.h>

void contagem_regressiva(int n){
    printf("%d\n", n);
    if(n == 1)
        return 0;
    contagem_regressiva(n-1);
    
}

int main(){
    int n;
    scanf("%d", &n);
    contagem_regressiva(n);
    return 0;
}