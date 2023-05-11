#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void)
{
	//pede pro usuario escolher que linha ele quer trocar por qual
	char X[MAX][MAX],Y[MAX];
	int rows, cols, change1, change2;
	printf("Quantas linhas queres? ");
	scanf("%d", &rows);
	printf("Quantas colunas queres? ");
	scanf("%d", &cols);
	do{
		printf("Que linha voce quer alterar? ");
		scanf("%d", &change1);
	}while(change1>=rows);
	do{
		printf("Que linha voce quer alterar? ");
		scanf("%d", &change2);
	}while((change2>=rows)||(change2==change1));
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			X[i][j] = i+1;
			printf("%d", X[i][j]);
		}
	printf("\n");
	}
		
	for(int j=0;j<cols;j++)
	{
		Y[j]= X[change1][j];
	}
	for(int j=0;j<cols;j++)
	{
		X[change1][j]= X[change2][j];
	}
	for(int j=0;j<cols;j++)
	{
		X[change2][j]= Y[j];
	}
	
	printf("\n\n");
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
