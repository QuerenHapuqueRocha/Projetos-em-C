/*Faça um programa que informe a quantidade total de calorias a partir da escolha
do usuário, que deve informar o prato típico e a bebida. A tabela de calorias
encontra-se a seguir: 
Italiano 750 cal Chá 30 cal
Japonês 324 cal Suco de laranja 80 cal
Salvadorenho 545 cal Refrigerante 90 cal*/

#include <stdio.h>
int main()
{
	int op;
	float total;
	
	total = 0;
	printf("1 - Italino 2 - Japones 3 - Salvadorenho \n");
	printf("Informe o prato desejado \n");
	scanf("%d",&op);
	
	switch (op)
	{
		case 1: total = total + 750;
		break;
		case 2: total = total + 324;
		break;
		case 3: total = total + 545;
		break;
	}
	
	printf("1 - Cha 2 - Suco de Laranja 3 - Refrigerante \n");
	printf("Informe a bebida desejada: \n");
	scanf("%d", &op);
	
	switch (op)
	{
		case 1: total = total + 30;
		break;
		case 2: total = total + 80;
		break;
		case 3: total = total + 90;
		break;
	}
	
	printf("O total de calorias e %2.f \n,", total);
	
	return(0);
}
