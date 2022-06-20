#include <stdio.h>
#include <math.h>

int main()
{
	float num1, num2, total;
	
	printf("Informe o primeiro numero: ");
	scanf("%f", &num1);
	printf("Informe o segundo numero: \n");
	scanf("%f", &num2);
	
	total = pow(num1, num2);
	
	printf("%2.f elevado a %2.f e: %2.f", num1, num2, total);
	return (0);
}
