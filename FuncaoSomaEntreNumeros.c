/*elabore uma função que receba dois números positivos por parâmetro e retorne 
a soma dos N números  inteiros existentes entre eles.*/

#include <stdio.h>
#include <stdlib.h>

int soma(int num1, int num2)
{
	int resultado, i;
	for (i=0; i <= num2; i++)
	{
		resultado = resultado + i;
	}
	return (resultado);
}

int main ()
{
	int numero1, numero2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);
	
	numero1 = soma(numero1, numero2);
	
	printf("A soma dos numeros dados e: %d \n", numero1);
	system("pause");
	return (0);
}
