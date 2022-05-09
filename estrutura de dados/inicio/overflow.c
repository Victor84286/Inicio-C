#include <stdio.h>

int main(void) {
  int limite, num1, num2, resultado;
  char conta;

  scanf("%d", &limite);
  scanf("%d%c%d", &num1, &conta, &num2);
  
  printf("%c\n", conta);
  printf("%d\n", limite);

  if (conta == '+'){
    resultado = num1 + num2;
  }
  else if (conta == '*'){
    resultado = num1*num2;
  }
  printf("%d\n", resultado);
  if (resultado > limite){
    printf("OVERFLOW");
  }
  else{
    printf("OK");
  }
  
  return 0;
}
