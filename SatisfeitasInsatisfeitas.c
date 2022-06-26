/*programa que leia a idade e opinião e apresente: o número de clientes que responderam satisfatório, a media de idade dos clientes que opinaram como satisfatorio, e o número de clientes que responderam insatisfatório. O programa
encerra quando for digitado o valor zero para a idade.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int idade, npessoas, npessoasi;
	int npessoass, opiniao;
	float somai, media;
	
	npessoas = 0;
	npessoass = 0;
	npessoasi = 0;
	somai = 0;
	
	printf("Informe a idade: \n");
	scanf("%d", &idade);
	
	while (idade !=0)
	{
		do
		{
			printf("informe a opiniao: \n");
			scanf("%d", &opiniao);
		} while ((opiniao!=1) && (opiniao!=2) && (opiniao !=3));
		npessoas++;
		if (opiniao == 1)
		{
			somai = somai + idade;
			npessoas++;
		} 
		else {
			if (opiniao == 3)
				npessoas++;
		}
		printf("Informe a idade: \n");
		scanf("%d", &idade);
	}
	media = (somai/npessoas);
	printf("O numero de pessoas insatisfeitas e: %d \n", npessoasi);
	printf("O numero de pessoas satisfeitas e: %d \n", npessoass);
	printf("A media de idade das pessoas satisfeitas e: %.2f\n", media);
	
	return (0);
}

