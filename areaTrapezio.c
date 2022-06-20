#include <stdio.h>

int main(){
	float base1, base2, altura, area;
	
	printf("Informe o valor da base maior: \n");
	scanf("%f", &base1);
	printf("Informe o valor da base menor: \n");
	scanf("%f", &base2);
	printf("Informe o valor da altura: \n");
	scanf("%f", &altura);
	
	area = ((base1 + base2) * altura) / 2;
	
	printf("A area do trapezio e: %2.f", area);
	return (0);
	
	
}
