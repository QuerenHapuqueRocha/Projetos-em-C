/*Programa de tabuada do 1 ao 10*/
#include <stdio.h>
#include <math.h>

int main()
{
	int valor, i, j;
	for (i = 1; i <= 10; i++)
	{
		printf ("Tabuada do %d\n", i);
			for (j = 1; j <= 10; j++)
			{
				valor = i*j;
				printf ("%d x %d = %d\n", i, j, valor);
			}
	}
	return (0);
}
