/*Programa com função para converter temperatura de Celsius para Fahrenheit*/

#include <stdio.h>

float convertet (float celsius);

int main ()
{
	float celsius, resposta;
	printf("Informe a temperatura em graus Celsius: ");
	scanf("%f", &celsius);
	
	resposta = convertet(celsius);
	printf("A temperatura %.2f em Fahrenheit e %2.f \n", celsius, resposta);
}

float convertet(float celsius)
{
	float temp;
	temp = celsius * 1.8 + 32;
	return temp;
}
