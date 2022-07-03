/*faça um programa
que leia dois vetores A e B e apresente a quantidade de posições que possuem
elementos diferentes entre um vetor e outro.*/
#include <stdio.h>
#define max 5

int main ()
{
	int i, j, iguais, vet_A[max], vet_B[max];
	
	for (i=0; i<max; i++) // inicialização
	{
		vet_A[i] = 0;
		vet_B[i] = 0;
	}
	
	for (i=0; i<max; i++) // valores do vetor A
	{
		printf("Digite o %d valor do vetor A: ", i+1);
		scanf("%d", &vet_A[i]);
	}
	printf("\n");
	
	for(i=0;i<max; i++) // valores do vetor B
	{
		printf("Digite o %d valor do vetor B: ", i+1);
		scanf("%d", vet_B[i]);	
	}
	
	for (i=0;i<max;i++)
	{
		for(j=0; j<max; j++)
		{
			if (vet_A[i] == vet_B[i]) {
				iguais++;
			}
		}
		if(iguais < 1)
		{
			printf("\n Elementos diferentes: ");
			printf("%d", vet_A[i]);
		}
		iguais = 0;
	}
	return(0);
}
