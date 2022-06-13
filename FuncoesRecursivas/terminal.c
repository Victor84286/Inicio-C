#include <stdio.h>

int terminal(int n){
    int soma = 0;
    if(n <= 1){
        return 1;
    }
    else{
        
        return n + terminal(n-1);
    }
}

int main(){
    int num;
    scanf("%d", &num);

    printf("%d", terminal(num));
}