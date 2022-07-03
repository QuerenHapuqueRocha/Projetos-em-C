#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	char str_1[10] = {"Teste"};
	char str_2[10] = {"Queren"};
	
	strcat(str_1, str_2);
	printf("%s", str_1);
}
