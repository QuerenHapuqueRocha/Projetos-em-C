/*Construa um programa que receba a idade de uma pessoa e identifique sua classe
eleitoral: n�o eleitor (menor que 16 anos de idade), eleitor obrigat�rio (entre 18 e
65 anos) e eleitor facultativo (entre 16 e 18 anos e maior que 65 anos).*/

#include <stdio.h>

int main()
{
	int idade;
	printf("Qual a sua idade? \n");
	scanf("%d", &idade);
	if (idade < 16)
	{
		printf("Nao eleitor \n");	
	}
	else 
	{
		if ((idade < 18) || (idade > 65))
		{
			printf("Eleitor facultativo \n");	
		}
		else 
		{
			printf("Eleitor Obrigat�rio \n");
		}
		
	}
	return (0);
}
