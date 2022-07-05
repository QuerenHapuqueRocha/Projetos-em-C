/*elabore um programa que receba o valor da cotação do dólar e o valor em reais e
que apresente o valor em dólares.*/

#include <stdio.h>

float converte(float reais, float cotacao);

int main ()
{
	float resultado, valor, cotacao;
	resultado = 0; // inicializacao
	printf("Digite o valor da cotacao: ");
	scanf("%f", &cotacao);
	printf("Digite o valor em reais para convesao: ");
	scanf("%f", &valor);
	
	resultado = converte(valor,cotacao);
	
	printf("R$%.2f em dolares: %.2f \n", valor, resultado);
	return(0);
}

float converte(float reais, float cotacao)
{
	float conversao;
	conversao = reais / cotacao;
	return(conversao);
}
