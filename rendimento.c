#include <stdio.h>

int main()
{
	float deposito, taxa, rendimento, total;
	
	printf("Informe o valor do deposito: ");
	scanf("%f", &deposito);
	printf("Informe a taxa de juros \n");
	scanf("%f", &taxa);
	
	rendimento = deposito * (taxa/100);
	total = deposito + rendimento;
	
	printf("O rendimento e: %2.f \n", rendimento);
	printf("\n O total e: %2.f", total);
	
	return(0);
}
