#include <stdio.h>

int main(void) {
  char nome1[11];
  char nome2[11];
  
  int mao1 =0, mao2 =0 , partidas = 1, soma =0, cont =1;
  
  while(0 == 0){
    scanf("%d", &partidas);
    
    if (partidas == 0) 
        break;
    
    scanf("%s", &nome1);        
    scanf("%s", &nome2);
    
    printf("Teste %d\n", cont);
    
    for(int i = 0; i<partidas; i++){
        scanf("%d %d", &mao1, &mao2);
        soma = mao1 + mao2; 
       
        if(soma%2==0){
          printf("%s\n", nome1);
        }
        else{
        printf("%s\n", nome2);
        }
    }
    cont++;
  }
  return 0;
}