#include <stdio.h>
#include <string.h>
int main()
{
	FILE *arq;
	char palavra[50];
	arq = fopen("arquivo.txt", "w");
	if (arq == NULL)
	{
		printf ("O arquivo n�o foi aberto. Ocorreu um erro!\n");
	}
	else
	{
		printf ("Digite uma palavra: ");
		gets(palavra);
		fflush(stdin);
		while ((strcmp(palavra,"fim") != 0))
		{
			fputs(palavra, arq);
				if (ferror(arq))
				{
					printf("Erro na grava��o!!!\n");
				}
				else
				{
					printf ("Grava��o efetuada com sucesso!\n");
				}
				printf ("Digite uma palavra: ");
				gets(palavra);
				fflush(stdin);
		}
	}
	fclose(arq);
}
