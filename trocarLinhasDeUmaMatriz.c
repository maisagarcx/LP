#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void)
{
	//trocar as linhas de uma matriz qualquer
	char X[MAX][MAX],Y[MAX][MAX];
	int rows, cols;
	
	scanf("%d", &rows);
	scanf("%d", &cols);
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			X[i][j] = i+1;
			printf("%d", X[i][j]);
		}
	printf("\n");
	}
	printf("\n\n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			Y[rows-i-1][j] = X[i][j];
			printf("%d", X[rows-i-1][j]);
		}
		printf("\n");	
	}
	return 0;
}
