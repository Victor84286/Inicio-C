#include <stdio.h>

int main(){

	float num1, num2, num3, lim_inf, lim_sup;

	printf("escreva o primeiro numero ");
	scanf("%f", &num1);
	printf("escreva o segundo numero ");
	scanf("%f", &num2);
	printf("escreva o terceiro numero ");
	scanf("%f", &num3);
	printf("escreva o limite inferior");
	scanf("%f", &lim_inf);
	printf("escreva o limite superior");
	scanf("%f", &lim_sup);
	
	if (num1<lim_inf){
	printf("o primeiro numero esta abaixo de %.1f", lim_inf);
	}
	if (num2<lim_inf){
	printf("o segundo numero esta abaixo de %.1f", lim_inf);
	}
	if (num3<lim_inf){
	printf("o terceiro numero esta abaixo de %.1f", lim_inf);
	}
	
	if (num1==lim_inf){
	printf("o primeiro numero e %f", lim_inf);
	}
	if (num2==lim_inf){
	printf("o segundo numero e %.1f", lim_inf);
	}
	if (num3==lim_inf){
	printf("o terceiro numero e %.1f", lim_inf);
	}
	
	if ((num1>lim_inf)&&(num1<lim_sup)){
	printf("o primeiro numero esta entre de %.1f e %.1f", lim_inf, lim_sup);
	}
	if ((num2>lim_inf)&&(num2<lim_sup)){
	printf("o segundo numero esta entre de %.1f e %.1f", lim_inf, lim_sup);
	}
	if ((num3>lim_inf)&&(num3<lim_sup)){
	printf("o terceiro numero esta entre de %.1f e %.1f", lim_inf, lim_sup);
	}
	
	if (num1==lim_sup){
	printf("o primeiro numero e %.1f", lim_sup);
	}
	if (num2==lim_sup){
	printf("o segundo numero e %.1f", lim_sup);
	}
	if (num3==lim_sup){
	printf("o terceiro numero e %.1f", lim_sup);
	}
	
	if (num1>lim_sup){
	printf("o primeiro numero e maior que %.1f", lim_sup);
	}
	if (num2>lim_sup){
	printf("o segundo numero e maior que %.1f", lim_sup);
	}
	if (num3>lim_sup){
	printf("o terceiro numero e maior que %.1f", lim_sup);
	}
}