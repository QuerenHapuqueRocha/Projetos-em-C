/*Elabore um programa que leia uma palavra e, se ela tiver n�mero �mpar de caracteres,
 imprima todas as suas vogais*/
 
 #include <stdio.h>
 #include <string.h>
 #define max 10
 int main() 
 {
 	char palavra[max];
 	int i;
 	char letra;
 	printf("Digite uma palavra: ");
 	scanf("%s", palavra);
 	strlwr(palavra);
 	if (strlen(palavra) % 2 == 1)
 	{
 		for (i = 0; i< max; i++){
 			letra = palavra[i];
 			switch (letra) {
 				case 'a': printf("%c", letra);
 				break;
 				case 'e': printf("%c", letra);
 				break;
 				case 'i': printf("%c", letra);
 				break;
 				case 'o': printf("%c", letra);
 				break;
 				case 'u': printf("%c", letra);
 				break;
			 }
		 }
	 }
 }
