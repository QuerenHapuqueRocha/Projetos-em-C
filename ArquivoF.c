# include <stdio.h>

int main ()
{
	FILE *arq;
	char letra;
	arq = fopen("arquivo.txt", "w");
	
	if(arq == NULL)
	{
		printf("O arquivo nao foi aberto. Ocorreu um erro! \n");
	}
	else
	{
		printf("Digite um caractere: ");
		scanf("%c", &letra);
		fflush(stdin);
		while ((letra != 'f') && (letra !='F'))
		{
			fputc(letra, arq);
			if (ferror(arq))
			{
				printf("Erro na gravacao!!! \n");
			}
			else
			{
				printf("Gravacao efetuada com sucesso! \n");
			}
			printf("Digite outro caractere:");
			scanf("%c", &letra);
			fflush(stdin);
		}
	}
	fclose(arq);
}
