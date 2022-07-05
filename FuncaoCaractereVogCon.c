#include <stdio.h>
	
int verifica(char letra);

int main()
{
	char letra;
	int resultado;
	
	printf ("Digite uma letra: ");
	letra = getch();
	
	resultado = verifica(letra);
	
	if (resultado == 1)
		printf ("A letra '%c' é uma vogal\n", letra);
	else if (resultado == 0)
		printf ("A letra '%c' é uma consoante, número ou caractere especial\n", letra);
	system ("pause");
	return (0);
}
int verifica(char letra)
{
	switch (letra)
	 {
		case 'a' : return (0);
		break;
		case 'e' : return (0);
		break;
		case 'i' : return (0);
		break;
		case 'o' : return (0);
		break;
		case 'u' : return (0);
		break;
		case 'A' : return (0);
		break;
		case 'E' : return (0);
		break;
		case 'I' : return (0);
		break;
		case 'O' : return (0);
		break;
		case 'U' : return (0);
		break;
		default : return (1);
		break;
	}
}

