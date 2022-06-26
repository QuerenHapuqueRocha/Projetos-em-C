/*Programa que apresente a soma de todos os números inteiros ímpares entre 200 e 500*/

#include <stdio.h>
int main()
{
	float soma;
	int i;
	for (i = 200; i <= 500; i++)
	{
		if (i % 2 == 1)
		soma = soma + i;
	}
	printf("A soma de todos os ímpares inteiros entre 200 e 500 é %.0f\n", soma);
	return (0);
}
