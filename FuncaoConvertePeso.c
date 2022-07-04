#include <stdio.h>
#include <stdlib.h>

float convertePeso(float quilos)
{
	float gramas; 
	gramas = quilos * 1000;
	return gramas;
}
int main ()
{
	float qui, gra;
	printf("Digite o peso em quilos: ");
	scanf("%f", &qui);
	
	gra = convertePeso(qui);
	
	printf("O peso e de %1.f gramas. \n", gra);
}
