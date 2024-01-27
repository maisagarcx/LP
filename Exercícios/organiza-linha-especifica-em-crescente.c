#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void)
{
	//pede pro usuario escolher que linha ele quer trocar por qual
	char X[MAX][MAX],Y[MAX];
	int rows, cols, change, temp;
	
	printf("Quantas linhas queres? ");
	scanf("%d", &rows);
	printf("Quantas colunas queres? ");
	scanf("%d", &cols);

	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			X[i][j] = cols-j;
			printf("%d", X[i][j]);
		}
	printf("\n");
	}
	
	do{
		printf("\nQue linha voce quer organizar em ordem crescente? ");
		scanf("%d", &change);
	}while(change>rows);
	printf("\n");
  
	for(int j=0;j<cols;j++)
	{
		Y[j]=X[change-1][j];
  }

  for(int i=0;i<cols;i++) 
  {
    for(int j=i+1;j<cols;j++) 
    {
      if(Y[i]>Y[j]) 
      {
        temp = Y[i];
        Y[i] = Y[j];
        Y[j] = temp;
      } 
    }
  }
  
  for(int j=0;j<cols;j++)
	{
		X[change-1][j]=Y[j];
  }

  for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("%d", X[i][j]);
		}
	printf("\n");
  }
  
    return 0;
}
