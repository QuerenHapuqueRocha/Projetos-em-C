/*fa�a um programa que verifica se determinado n�mero � positivo ou negativo, por meio de uma fun��o.*/

#include <stdio.h>

int numero;

void verifica()
{
	if (numero >0)
		printf("Positivo \n");
	else if (numero < 0)
		printf("Negativo \n");
	else
		printf ("Zero \n");
}

int main ()
{
	printf("Digite um numero: \n");
	scanf("%d", &numero);
	
	verifica();
	printf("\n");
	system ("pause");
	return(0);
}
