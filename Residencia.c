/*Programa que calcule a área total de uma residência(sala, cozinha, banheiros, quartos, etc). O programa deve solicitar a entrada do nome, a largura e o comprimento de determinado cômodo até que o nome do 
cômodo seja "FIM". O programa deve apresentar o valor total acumulado a área residencial.*/

#include <stdio.h>
#include <string.h>
int main()
{
	char comodo[20] = "";
	int largura, comprimento, area, i;
	area = 0; // inicializacao
	while (strcmp(comodo, "fim") != 0 &&
	strcmp(comodo,"FIM") != 0)
	{
		printf("Digite o nome do cômodo:\n");
		scanf("%s", &comodo);
		if (strcmp(comodo,"fim") != 0 && strcmp(comodo,"FIM") != 0)
		{
			printf("Digite a largura do cômodo:\n");
			scanf("%d", &largura);
			printf("\nDigite o comprimento do cômodo:\n");
			scanf("d", &comprimento);
			area = area + largura*comprimento;
		}
	}
	printf("\n Area Total da casa: %d m2\n", area);
	return (0);
}
