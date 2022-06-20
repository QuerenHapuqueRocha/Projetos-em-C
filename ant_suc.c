#include<stdio.h>

int main(){
	int num, ant, suc;
	printf("Escreva um numero \n");
	scanf("%d", &num);
	
	ant = num - 1;
	suc = num + 1;
	
	printf("O numero antecessor e: %d \n", ant);
	printf("O numero sucessor e: %d \n", suc);
	
	return (0);
}
