#include <stdio.h>

int main()
{
	float n1, n2, n3, n4, media;
	printf("Digita a nota 1: \n");
	scanf("%f", &n1);
	printf("Digita a nota 2: \n");
	scanf("%f", &n2);
	printf("Digita a nota 3: \n");
	scanf("%f", &n3);
	printf("Digita a nota 4: \n");
	scanf("%f", &n4);
	
	media = (n1 + n2 + n3 + n4)/4;
	
	printf("A media e: %.2f", media);
	
	return(0);
	
}
