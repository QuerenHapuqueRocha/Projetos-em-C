/*fa�a um programa com uma fun��o que apresente o somat�rio dos N primeiros 
n�meros pares, definidos por um operador. O valor de N ser� informado pelo usu�rio.*/

#include <stdio.h>
#include <stdlib.h>

int somatorio(int valor);

int main ()
{
	int numero, resultado;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	resultado = somatorio(numero);
	
	printf("O somatorio dos %d primeiros numeros pares e: %d \n", numero, resultado);
	system("pause");
	return(0);	
}

int somatorio(int valor)
{
	int soma, i;
	soma = 0;
	for(i=0; i<= valor; i=i+2)
	{
		soma = soma + i;
	}
	return (soma);
}
