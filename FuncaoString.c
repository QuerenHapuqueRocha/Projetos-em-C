/*função que receba uma string e retorne a quantidade de consoantes.*/

#include <stdio.h>
#include <string.h>

int conta(char nome[])
{
	int i, tam, qtd;
	
	tam = strlen(nome);
	nome = strupr(nome);
	qtd = 0;
	
	for (i=0; i<tam; i++)
	{
		if ((nome[i] != 'A') && (nome[i] != 'E') && (nome[i] != 'I') && (nome[i] != 'O') && (nome[i] != 'U') && (nome[i] != ' ') )
			qtd ++;
	}
	
	return qtd;	
}

int main ()
{
	int total;
	char palavra[30];
	printf("informe a string: ");
	gets(palavra);
	total = conta(palavra);
	
	printf("A quantidade de consoantes da string %s e: %d \n", palavra, total);
}
