/*escreva um programa que receba cinco n�meros inteiros e apresente o maior e o menor.*/

#include <stdio.h>

int main()

{
	int num; 
	int maior, menor, i;
	
	printf("Digite o 1� numero: \n");
	scanf("%d", &num);
	maior = num;
	menor = num;
	
	printf("Digite o 2� numero: \n");
	scanf("%d", &num);
	if (num > maior)
	maior = num;
	if (num < menor)
	menor = num;
	
	printf("Digite o 3� numero: \n");
	scanf("%d", &num);
	if (num > maior)
	maior = num;
	if (num < menor)
	menor = num;
	
	printf("Digite o 4� numero: \n");
	scanf("%d", &num);
	if (num > maior)
	maior = num;
	if (num < menor)
	menor = num;
	
	printf("Digite o 5� numero: \n");
	scanf("%d", &num);
	if (num > maior)
	maior = num;
	if (num < menor)
	menor = num;
	
	printf("O maior numero e: %d \n", maior);
	printf("O menor numero e: %d \n", menor);
	
	
	return(0);
}
