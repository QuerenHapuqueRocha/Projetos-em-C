#include <stdio.h>

int calcQuadrado (int x)
{
	x = x * x;
	return x;
}

int main ()
{
	int num, resposta;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	resposta = calcQuadrado(num);
	printf("O quadrado do numero %d e %d \n", num, resposta);
	
}
