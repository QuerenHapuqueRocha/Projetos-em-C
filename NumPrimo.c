/*programa que receba um n�mero inteiro maior que um e verifique se ele � primo*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, i, qtdade;
	printf("Informe o numero: \n");
	scanf("%d", &num);
	qtdade = 0;
	for (i=1; i<=num; i++)
	{
		if (num % i == 0)
			qtdade++;
	}
	if (qtdade == 2)
		printf("O numero e primo. \n");
	else
		printf("Nao e primo. \n");
	return(0);
}
