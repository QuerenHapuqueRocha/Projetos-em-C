#include <stdio.h>
#include <math.h>

int main()
{
	int quadrado, num;
	float raiz;
	
	printf("Digite um numero inteiro \n");
	scanf("%d", &num);
	if (num % 2 == 0)
	{
		raiz = sqrt(num);
		printf("O numero e par. \n");
		printf("A raiz quadrada e: %.3f", raiz);	
	}
	else {
		quadrado = num * num;
		printf("O numero e impar. \n");
		printf("O numero ao quadrado e: %d \n", quadrado);
		
	}
	
	return(0);
}
