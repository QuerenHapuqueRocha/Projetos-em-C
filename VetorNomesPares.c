/*Programa que leia um nome e apresente as letras que estão nas posições pares*/

#include <stdio.h>

int main ()
{
	char nome [30];
	int tam, i;
	
	printf("Digite o nome:");
	gets(nome);
	
	tam = strlen(nome);
	
	for(i=0;i<tam; i++)
	{
		if (i % 2 == 0)
		{
			printf("\n %c", nome[i]);
			
		}
	}
	return(0);
}

