#include <stdio.h>
int main()
{
	char nome[30];
	int idade;
	
	printf("Informe o nome:\n");
	scanf ("%s", nome);
	printf("Informe a idade:\n");
	scanf ("%d", &idade);
	
	printf ("Nome: %s\n", nome);
	printf ("Idade: %d\n", idade);
	
	if (idade <= 18) {
	printf("O valor do plano é: R$50,00\n");
	}
	else
	{
		if ((idade >=19) && (idade <= 29))
		{
			printf("O valor do plano é: R$70,00\n");
		}
		else
		{
			if ((idade >=30) && (idade <= 45))
			{
				printf("O valor do plano é: R$90,00\n");
			}
			else
			{
				if ((idade >= 46) && (idade <= 65))
				{
					printf("O valor do plano é: R$130,00\n");
				}
				else
					{
					printf("O valor do plano é: R$170,00\n");
					}
				}
			}
		}
	return (0);
}
