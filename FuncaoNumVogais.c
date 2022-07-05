/*construa uma função que receba um nome e retorne o número de vogais.*/

#include <stdio.h>
#define max 20

int verifica(char palavra[]);

int main () 
{
	char palavra [max];
	int i, vogais;
	
	for (i=0;i<max;i++)
		palavra[i] = '\0';
		
	printf("Digite uma palavra: ");
	fflush(stdin);
	scanf("%s", palavra);
	printf("Total de vogais na palavra: %d \n", vogais);
	return (0);
}

int verifica(char palavra[])
{
	int i, vogais = 0;
	char letra;
	for(i=0; i<max; i++)
	{

		letra = palavra[i];
		switch (letra) {
			case 'a': vogais++;
			break;
			case 'e': vogais++;
			break;
			case 'i': vogais++;
			break;
			case 'o': vogais++;
			break;
			case 'u': vogais++;
			break;
			case 'A': vogais++;
			break;
			case 'E': vogais++;
			break;		
			case 'I': vogais++;
			break;
			case 'O': vogais++;
			break;
			case 'U': vogais++;
			break;	
			default: break;
		}
	}
}
