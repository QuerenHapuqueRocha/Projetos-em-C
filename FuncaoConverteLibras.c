/*Programa com função para converter peso em libras*/

#include<stdio.h>

float convertep (float peso);

int main ()
{
	float peso, resposta;
	printf("Informe o peso em quilogramas: ");
	scanf("%f", &peso);
	
	resposta = convertep(peso);
	printf("O peso %.2f em libras e %.2f \n", peso, resposta);
}

float convertep (float peso)
{
	peso = peso * 2.68;
	return peso;
}
