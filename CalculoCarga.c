/*Fa�a um programa que receba o c�digo do estado de origem da carga de um caminh�o, o peso da carga em toneladas e o c�digo dela. Calcule e apresente o peso da carga em quilos, o pre�o da carga
o valor do imposto e o valor total da carga (pre�o da carga mais imposto)*/

#include <stdio.h>
int main()
{
	int cod_Estado, peso, cod_Carga;
	float imposto, taxa_imp, preco, preco_quilo;
	float total;
	
	printf("Digite o codigo do Estado: \n");
	scanf("%d", &cod_Estado);
	printf("Digite o peso da carga em toneladas: \n");
	scanf("%d", &peso);
	printf("Digite o codigo da carga: \n");
	scanf("%d", &cod_Carga);
	
	switch (cod_Estado)
	{
		case 1:
			taxa_imp = 0.2;
			break;
		case 2:
			taxa_imp = 0.15;
			break;
		case 3:
			taxa_imp = 0.1;
			break;
		case 4:
			taxa_imp = 0.05;
			break;
		default: 
		taxa_imp = 0;
		printf("\n Codigo de estado invalido \n");
		break;
	}
	if (cod_Carga >= 10 && cod_Carga <= 20)
	{
		preco_quilo = 180;
	}
	else if (cod_Carga >= 21 && cod_Carga <= 30)
	{
		preco_quilo = 120;
	}
	else if (cod_Carga >= 31 && cod_Carga <= 40){
		preco_quilo = 230;
	}
	else {
		printf("\n Codigo de carga invalido \n");
		preco_quilo = 0;
	}
	
	imposto = peso * 1000 * preco_quilo * taxa_imp;
	preco = peso * 1000 * preco_quilo;
	total = preco + imposto;
	
	printf("\n Peso em KG: %d \nPreco: %.2f \n Imposto: %.2f \n Total: %.2f \n ", peso*1000, preco, imposto, total);
	
}
