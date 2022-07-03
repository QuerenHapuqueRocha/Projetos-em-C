/*programa que leia informações (matrícula, nome, setor e salário)
de 3 funcionários. Deve ser permitido executar quantas consultas o operador
desejar, em que ele digita a matrícula e são apresentados o setor e o salário. Se a
matrícula digitada não existir, informar o usuário.*/

#include <stdio.h>
#define TAM 3
struct funcionario 
{
	int matricula;
	char nome[50];
	char setor[30];
	float salario
};

int main()
{
	struct funcionario ficha[TAM];
	int busca, i, acha;
	char op;
	
	for(i=0;i<TAM;i++)
	{
		printf("Digite a matricula do funcionario: ");
		scanf("%d", &ficha[i].matricula);
		fflush(stdin);
		
		printf("Digite o nome: ");
		scanf("%50[^ \n]s", &ficha[i].nome);
		fflush(stdin);
		
		printf("Digite o setor: ");
		scanf("%30[^ \n]s", &ficha[i].setor);
		fflush(stdin);
		
		printf("Digite o salario: ");
		scanf("%f", &ficha[i].salario);
		fflush(stdin);
	}
	
	do {
		printf("Deseja realizar busca? (S/N) ");
		scanf("%c", &op);
		fflush(stdin);
	} while ((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'));
	
	while ((op == 'S') || (op == 's'))
	{
		printf("Informe a matricula que deseja buscar: ");
		scanf("%d", &busca);
		fflush(stdin);
		
		i=0;
		acha =0;
		
		while ((i<TAM) && (acha==0))
		{
			if (ficha[i].matricula == busca)
			acha = 1;
			
			else 
			i++;
		}
		if (acha == 1)
		{
			printf("O setor e: %s \n", ficha[i].setor);
			printf("O salario e: %.2f \n", ficha[i].salario);
		}
		else 
		{
			printf("Matricula nao cadastrada");
		}
		
		do {
		printf("Deseja realizar busca? (S/N) ");
		scanf("%c", &op);
		fflush(stdin);
	} while ((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'));
	
	}
	return(0);
}
