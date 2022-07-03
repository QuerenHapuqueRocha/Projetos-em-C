#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto {
	int codigo;
	float preco;
	char descr[50];
	int saldo;
};

int main() {
	struct produto ficha[10];
	int i;
	
	for (i=0; i<10; i++) 
	{
		printf("Digite o codigo do produto: \n");
		scanf("%d", &ficha[i].codigo);
		printf("Digite a descricao do produto: \n");
		scanf("%s", ficha[i].descr);
		printf("Digite o preco do produto: \n");
		scanf("%f", &ficha[i].preco);
		printf("Digite o saldo do produto: \n");
		scanf("%d", &ficha[i].saldo);
	}
	
	for (i=0; i<10; i++)
	{
		printf("\n PRODUTO %d \n", i+1);
		printf("Codigo: %d \n", ficha[i].codigo);
		printf("Descricao: %s \n", ficha[i].descr);
		printf("Preco: %.2f \n", ficha[i].preco);
		printf("Saldo: %d \n", ficha[i].saldo);
	}
	
	return(0);
}
