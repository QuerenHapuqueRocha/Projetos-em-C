/*Programa para ler dois vetores, A e B, com 5 numeros inteiros que efetua a soma dos dois vetores em um vetor C e imprima o vetor C em ordem crescente*/

#include <stdio.h>

int main()
{
	int vetorA[5], vetorB[5], vetorC[5];
	int i, j, troca;
	
	for (i=0;i<5;i++)
	{
		printf("Digite o %d elemento do vetor A: ", i);
		scanf("%d", &vetorA[i]);
		printf("Digite o %d elemento do vetor B: ", i);
		scanf("%d", &vetorB[i]);
		
		vetorC[i] = vetorA[i] + vetorB[i];		
	}
	
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(vetorC[i] > vetorC[j])
			{
				troca = vetorC[i];
				vetorC[i] = vetorC[j];
				vetorC[j] = troca;
			}
		}
	}
	
	for (i=0;i<5;i++)
	{
		printf("%d - ", vetorC[i] );
	}
	return(0);
}
