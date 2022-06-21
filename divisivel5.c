/*um programa que leia um número e informe se ele é divisível por 5*/
#include <stdio.h>

int main(){
	int num;
	printf("Digite um numero: \n");
	scanf("%d", &num);
	if (num % 5 == 0) 
		printf("O numero %d e divisivel por 5 \n", num);
	else 
		printf("O numero %d nao e divisivel por 5 \n", num);
		
	return(0);
}
