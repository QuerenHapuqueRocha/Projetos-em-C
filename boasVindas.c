#include<stdio.h>

int main()
{
	char nome[20];
	
	printf("Qual o seu nome? \n");
	scanf("%s", &nome);
	printf("Bem vindo(a) a disciplina de Algoritmos e Logica de Programacao II,  %s", nome);
	
	return(0);
}
