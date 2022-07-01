#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char nome[80], sobrenome[80];
	printf("Digite o seu nome: ");
	gets(nome);
	printf("Digite o seu sobrenome: ");
	gets(sobrenome);
	strcat(nome, sobrenome);
	printf("Apos concatenar as strings temos que nome e: %s \n",nome);
	
	if (strstr(sobrenome, nome) == 0)
	{
		printf("Agora o sobrenome esta contido na variavel nome. \n");
	}
	strlwr(nome);
	printf("O nome em minusculo e: %s \n", nome);
	
	strupr(nome);
	printf("O nome em maiusculo e: %s \n", nome);
	
	return(0);
}
