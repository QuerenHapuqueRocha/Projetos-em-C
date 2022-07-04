#include <stdio.h>
#include <stdlib.h>

int main () 
{
	char linha[200];
	FILE *arquivo;
	
	arquivo = fopen ("Untitled3.cpp", "r");
	
	if (arquivo == NULL)
	{
		printf("Erro inciar o arquivo! \n" );
		system ("pause");
		exit (-1);
	}
	
	rewind(arquivo);
	while(!feof(arquivo))
	{
		fgets(linha, 200, arquivo);
		printf("%s", linha);
	}
	fclose(arquivo);
}
