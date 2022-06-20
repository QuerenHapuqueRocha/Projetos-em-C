#include <stdio.h>
#include <math.h>
#define pi 3.141593

int main()
{
	float r;
	printf("Digite o valor do raio: ");
	scanf("%f", &r);
	printf("Valor da area: %f", pi * pow(r,2));
	printf("Valor do perimetro: %f", 2 * pi * r);
	return (0);
	
	
}
