#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto {
	int cod;
	float preco;
	char descr[100];
};

int main()
{
	struct produto prod;
	
	prod.cod=1;
	prod.preco=14.56;
	strcpy(prod.descr, "limao");
	
	printf("%d - %2.f - %s \n", prod.cod, prod.preco, prod.descr);
	
}
