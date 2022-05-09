#include <stdio.h>

int main(){
    int n, ma = -100000, me = 100000, mai, mei;
    
    printf("Escreva a quantidade de numeros que ira escrever\n");
    scanf("%d", &n);
    int num[n];

    for(int i = 0; i<n; i++){
        scanf("%d", &num[i]);
    }

    for(int i =0; i<n; i++){
        if(num[i]<me){
            me=num[i];
            mei=i;
        }
        else if(num[i]>ma){
            ma=num[i];
            mai=i;
        }
    }

    for(int i =0; i<n; i++){
        if(num[i]==me){
            printf("%d", num[mai]);
        }
        else if(num[i]==ma){
            printf("%d", num[mei]);
        }
        else{ 
        printf("%d", num[i]);
        }
        if(i<n-1){
        printf(", ");
        }
    }

    return 0;
}