/*Programa para coletar informa��es sobre o salario e o n�mero de filhos dos habitantes. A leitura � realizada at� que seja informado o valor -1 para o sal�rio. Apresente a media de salario da popula��o, a media de filhos e o maior sal�rio*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int filhos, npessoas;
	float salario, somas, somaf, msalario;
	
	npessoas = 0;
	somaf = 0;
	somas = 0;
	msalario = 0;
	
	printf("Informe o salario: \n");
	scanf("%f", &salario);
	
	while (salario !=-1)
	{
		printf("Informe o numero de filhos: \n");
		scanf("%d", &filhos);
		npessoas++;
		if(salario > msalario)
			msalario = salario;
		somaf = somaf + filhos;
		somas = somas + salario;
		printf("Informe o salario: \n");
		scanf("%f", &salario);
	}
	printf("A media de salarios e: %.2f \n", somas/npessoas);
	printf("A media de filhos e: %.2f \n", somaf/npessoas);
	printf("O maior salario e: %.2f \n", msalario);
	
	return(0);
}
