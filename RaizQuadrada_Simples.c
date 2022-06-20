#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	float raiz;
	printf (" Digite um numero inteiro \n");
	scanf("%d", &num);
	
	if (num % 2 == 0){
		raiz = sqrt(num);
		printf("A raiz quadrada e: %.3f \n", raiz);
	}
	
	return(0);
	
}
