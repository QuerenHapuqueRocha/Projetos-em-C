/*ler um número inteiro e calcular o seu fatorial*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, i, fat;
	printf("Informe o numero: \n");
	scanf("%d", &num);
	fat = 1;
	for (i=1; i <= num; i++)
		fat = fat * i;
	printf("O fatorial e: %d \n", fat);
	return(0);
}
