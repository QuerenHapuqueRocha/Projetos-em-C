#include<stdio.h>

int main() {
	float n1, n2, n3, n4, media;
	
	printf("Digite a nota 1 \n");
	scanf("%f", &n1);
	printf("Digite a nota 2 \n");
	scanf("%f", &n2);
	printf("Digite a nota 3 \n");
	scanf("%f", &n3);
	printf("Digite a nota 4 \n");
	scanf("%f", &n4);
	
	media = (n1 + n2 + n3 + n4)/4;
	
	printf("\n A media e: %2.f \n", media);
	
	return(0);
	
	
}
