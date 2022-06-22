/*Construa um programa que dado um numero inteiro, informe o mês correspondente*/

#include <stdio.h>

int main()
{
	int numero;
	printf("Informe um numero \n");
	scanf("%d", &numero);
	
	switch (numero)
	{
		case 1: printf("Janeiro \n");
		break;
		case 2: printf("Favereiro \n");
		break;
		case 3: printf("Março \n");
		break;
		case 4: printf("Abril \n");
		break;
		case 5: printf("Maio \n");
		break;
		case 6: printf("Junho \n");
		break;
		case 7: printf("Julho \n");
		break;
		case 8: printf("Agosto \n");
		break;
		case 9: printf("Setembro \n");
		break;
		case 10: printf("Outubro \n");
		break;
		case 11: printf("Novembro \n");
		break;
		case 12: printf("Dezembro \n");
		break;
		default: printf("Mes invalido \n");
		break;
	}
	return(0);
	
}
