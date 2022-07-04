/*faça um programa para efetuar o cadastro de 2 contatos. 
O cadastro deve conter as seguintes informações: nome, telefone e
e-mail. Apresente todos os cadastros.*/

#include <stdio.h>
#define max 2
#define N 30
typedef struct dados {
	char nome[N];
	char telefone[N];
	char email[N];
} cadastro;

int main ()
{
	cadastro cadastros[max];
	int i;
	for(i=0; i<max; i++)
	{
		printf("\n Digite os dados do %d cadastro \n", i+1);
		printf("Nome: ");
		scanf("%30 [^\n]s", cadastros[i].nome);
		fflush(stdin);
		printf("Telefone: ");
		scanf("%30 [^\n]s", cadastros[i].telefone);
		fflush(stdin);
		printf("Email:");
		scanf("%30[^\n]s", cadastros[i].email);
		fflush(stdin);
	}
	printf("\n \n ** Pessoas Cadastradas ** \n");
	
	for(i=0; i<max; i++)
	{
		printf("Nome: %s \n", cadastros[i].nome);
		printf("Telefone: %s \n", cadastros[i].telefone);
		printf("Email: %s \n", cadastros[i].email);
		printf("\n");
	}
	return(0);
}
