/*Programa que receba a idade e a altura de várias pessoas, calcule e apresente a media de altura e idade das pessoas. A entrada de dados é encerreada quando for digitado o valor zero para a idade.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade, npessoas;
	float altura, somaa, somai;
	char sexo;
	
	somaa = 0;
	somai = 0;
	npessoas = 0;
	
	printf("Informe a idade: \n");
	scanf("%d", &idade);
	while (idade !=0)
	{
		printf("Informe a altura: \n");
		scanf("%f", &altura);
		npessoas++;
		somai = somai + idade;
		somaa = somaa + altura;
		printf("Informe a idade: \n");
		scanf("%d", &idade);
	}
	printf("A media de altura e: %.2f \n", somaa/npessoas);
	printf("A media de idade e: %.2f \n", somai/npessoas);
	
	return(0);
}
