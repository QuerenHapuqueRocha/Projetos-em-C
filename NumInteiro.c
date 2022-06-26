/*Programa que leia números inteiros até que seja informado o valor 0. Apresentar a média dos valores, o maior e o menor valor e a quantidade de números pares e impares.*/
#include <stdio.h>
#include <math.h>
int main()
{
	int numero, soma, quantidade, maior, menor, pares;
	int impares;
	float media;
	numero = 1;
	quantidade = 0;
	soma = 0;
	maior = 0;
	menor = HUGE_VAL;
	pares = 0;
	impares = 0;
	while (numero != 0)
	{
		printf("Digite um número:\n");
		scanf("%d", &numero);
		if (numero != 0)
		quantidade++;
		soma = soma + numero;
		if (numero % 2 == 0 && numero != 0)
		pares++;
		else if (numero % 2 == 1 && numero != 0)
		impares++;
		if (numero > maior && numero != 0)
		maior = numero;
		if (numero < menor && numero != 0)
		menor = numero;
	}
	media = soma / quantidade;
	printf ("\n Média: %.2f \n Maior: %d \n Menor: %d \n Pares: %d \n Ímpares: %d \n", media, maior, menor, pares, impares);
	return (0);

