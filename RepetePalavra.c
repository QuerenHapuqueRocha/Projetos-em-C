/*faça um programa que leia uma palavra
e o número de vezes que se deseja imprimi-la.*/

#include <stdio.h>

int main ()
{
	char palavra[10];
	int repeticoes, i;
	
	printf("Digite uma palavra: ");
	scanf("%s", &palavra);
	
	printf("Digite o numero de repeticoes: ");
	scanf("%d", &repeticoes);
	
	for (i=1; i<= repeticoes; i++)
	{
		printf("%s \n", palavra);
	}
	
	printf("\n");
	return(0);
}
