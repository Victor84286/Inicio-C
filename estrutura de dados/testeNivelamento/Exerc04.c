#include <stdio.h>

int main(){
    int num, me = 1000000, ma = -100000;
    for(int i =0; i<25; i++){
        scanf("%d", &num);
        if(num<me)
        me = num;
        else if(num>ma)
        ma = num;
    }
    
    printf("O maior numero eh %d e o menor e %d", ma, me);
    return 0;
}