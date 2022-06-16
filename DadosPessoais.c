#include <stdio.h>
#include<stdlib.h>
int main (){
	int idade, ano;
	float altura;
	char nome [30];
	printf("Digite o seu nome: \n");
	scanf("%s", nome);
	printf("Digite a sua idade: \n");
	scanf("%d", &idade);
	printf("Digite a sua altura: \n");
	scanf("%f", &altura);
	ano = 2022 - idade;
	printf("\nO nome e: %s", nome);
	printf("\nA altura e: %.2f", altura);
	printf("\nA idade e: %d", idade);
	printf("\nO ano de nascimento e: %d", ano);
	return (0);
}
