/*elabore um programa para efetuar o cadastro de 3 livros e imprimi-los. 
O cadastro deve conter as seguintes informações: título, autor, editora,
edição e ano.*/

#include <stdio.h>
#include <stdlib.h>
#define max 3
#define N 40

typedef struct dados {
	char titulo[N];
	char autor[N];
	char editora[N];
	int edicao;
	int ano;
} livro;

int main ()
{
	livro livros[max];
	int i;
	for (i=0; i<max; i++)
	{
		printf("\n Digite os dados do %d livro \n", i+1);
		printf("Titulo: ");
		scanf("%40[^\n]s", livros[i].titulo);
		fflush(stdin);
		printf("Autor:");
		scanf("%40[^\n]s", livros[i].autor);
		fflush(stdin);
		printf("Editora:");
		scanf("%40[^\n]s", livros[i].editora);
		fflush(stdin);
		printf("Edicao:");
		scanf("%d", &livros[i].edicao);
		fflush(stdin);
		printf("Ano: ");
		scanf("%d", &livros[i].ano);
		fflush(stdin);
		printf("\n");
	}
	printf("\n \n** Livros Cadastrados **\n");
	
	for(i=0; i<max; i++)
	{
		printf("Titulo: %s \n", livros[i].titulo);
		printf("Autor: %s \n", livros[i].autor);
		printf("Editora: %s \n", livros[i].editora);
		printf("Edicao: %d \n", livros[i].edicao);
		printf("Ano: %d \n", livros[i].ano);
		printf("\n");
	}
	
	return(0);
}


