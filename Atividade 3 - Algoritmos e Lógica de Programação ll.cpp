#include <stdio.h>

void identificarDivisivelPor3(int matriz[5][5]){
	int i, j;

  for(i=0; i<5; i++)
  {
        for(j=0; j<5; j++)
		{
          if(matriz[i][j] % 3 == 0)
		  {
            printf("N�mero divis�vel por 3 encontrado na linha %i, coluna %i, numero %i \n", i,j,matriz[i][j]);
          }
        }
  }

}
//C�digo que deve ser inserido aqui
int main(int argc, char const *argv[])
{
    //Matriz com valores fixo para nao fazer a leitura
    int matriz[5][5] = {{15,9,23,43,49},
                        {3,36,55,53,18},
                        {12,42,51,57,34},
                        {6,32,28,25,62},
                        {72,91,81,16,41}};
  identificarDivisivelPor3(matriz);
  return 0;
}
