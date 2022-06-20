#include <stdio.h>
#include <math.h>

int main()
{
	int valor;
	printf("Digite um numero inteiro: \n");
	scanf("%d", &valor);
	printf("\n A potencia de %d e %2.f", valor, pow(valor,2));
	printf("\n a potencia de %d e %2.f\n", valor, sqrt(valor));
	
	return(0);
}
