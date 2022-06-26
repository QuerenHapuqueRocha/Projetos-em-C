/*Programa para ler uma frase e a quantidade de vezes que deseja imprimir*/

#include <stdio.h>
int main()
{
	char frase[30];
	int i, numero;
	printf("Digite a frase:\n");
	//para poder digitar a frase com espaços em branco
	gets(frase);
	printf("Digite o numero de repeticoes:\n");
	scanf("%d", &numero);
	for (i = 1; i <= numero; i++)
	{
	printf("%s\n", frase);
	}
	return (0);
}
