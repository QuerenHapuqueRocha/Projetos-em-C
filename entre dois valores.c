#include <stdio.h>
#include <stdlib.h>
int main(){
	float num; 
	printf("Digite um numero: \n");
	scanf ("%f", &num);
	if (num > 10 && num < 20){
		printf("Valor entre 10 e 20");
	}
}
