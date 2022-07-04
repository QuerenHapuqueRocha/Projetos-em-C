#include <stdio.h>
#include <string.h>
int main()
{
	FILE *arq;
	char frase[50];
	arq = fopen("arquivo.txt", "r");
	if (arq == NULL)
	{
		printf ("O arquivo não foi aberto. Ocorreu um erro!\n");
	}
	else
	{
		while (!feof(arq))
		{
			fgets(frase, 50, arq);
			if (ferror(arq))
			{
				printf("Erro na leitura do arquivo!!!\n");
			}
			else
			{
				printf("Leitura realizada com sucesso. A cadeia e: %s \n", frase);
			}
		}
	}
	fclose(arq);
}
