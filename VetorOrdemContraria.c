/*Escreva um programa que leia 5 elementos inteiros e escreva-os em ordem contrária a leitura*/

#include <stdio.h>

int main()
{
	int vetorA[5];
	int i;
	
	for (i=0;i<5;i++)
	{
		printf("Digite o %d elemento: ", i);
		scanf("%d", &vetorA[i]);
	}
	
	for (i=4;i>=0;i--)
	{
		printf("\n %d ", vetorA[i]);
	}
	
	return(0);
}
