#include <stdio.h>

int main(void) {
  float salario;
  printf("escreva o salario ");
  scanf ("%f", &salario);
  if(salario <= 1000){
    salario = salario*115/100;
  } else if((1000 < salario)&&(salario <= 2000)){
    salario = salario*110/100;
  } else{
    salario = salario*105/100;
  }
  printf("o salario final é: %2.2f", salario);
  return 0;
}