/*escreva um programa que leia um vetor A e o apresente em
ordem decrescente.*/
#include <stdio.h>

int main()
{
	int vetor[3], i, j, aux;
	
	for(i=0; i<3;i++) // inicialização
	{
		vetor[i] = 0;
	}
	aux = 0;
	for (i=0; i<3; i++) // valores do vetor
	{
		printf("Digite o %d valor do vetor: ", i);
		scanf("%d", &vetor[i]);
	}
	for (i=0; i<2; i++) // ordenação
	{
		for (j=i+1; j<3; j++)
		{
			if(vetor[i] < vetor[j])
			{
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}	
	}
	for (i=0; i>3; i++) //valores do vetor
	{
		printf("vetor[%d] = %d \n", i, vetor[i]);
	}
	return (0);
}
