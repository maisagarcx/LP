#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define MAX 100

int main()
{
	char frasecompleta[MAX], tamanhos[MAX], matrix[MAX][MAX];
	int palavras = 0, linha = 0, coluna = 0, maiorpalavra, maior, menorpalavra, menor;
	
	printf("Insira uma frase: ");
	fgets(frasecompleta, MAX, stdin);
	printf("Sua frase original: %s", frasecompleta);
	
	for(int i=0;frasecompleta[i]!='\0';i++)
	{
		if(frasecompleta[i]==' ')
		{
			palavras++;
		}
		if(palavras==0)
		{
			if(frasecompleta[i]=='\n')
			{
				palavras=0;
				break;
			}
			else
			palavras=1;
		}
	}
	printf("Sua frase tem %d palavra(s)\n", palavras);
	
	for(int k=0;frasecompleta[k]!='\0';k++)
	{
		if(frasecompleta[k]=='\n'||frasecompleta[k]==' ')
		{
			matrix[linha][coluna]='\0';
			linha++;
			coluna = 0;
		}
		else
		{
			matrix[linha][coluna]=frasecompleta[k];
			coluna++;
		}
	}
	
	printf("Matriz de palavras:\n");
	for (int i = 0; i < palavras; i++)
	{
		printf("%s\n", matrix[i]);
	}
	
	for (int i=0;i<palavras;i++)
	{
    	for (int j=0;j<MAX;j++)
    	{
     	   if (matrix[i][j]=='\0')
     	   {
     	   	 tamanhos[i] = j;
             break;
			}
  	    }
    printf("%d\n", tamanhos[i]);
	}
	menorpalavra=tamanhos[0];
	for(int i=1;i<palavras;i++)
	{
		if(tamanhos[i]<menorpalavra)
		{
			menorpalavra=tamanhos[i];
			menor=i;
		}
	}
	printf("A menor palavra esta na linha %d\n", menor);
	maiorpalavra=tamanhos[0];
	for(int i=1;i<palavras;i++)
	{
		if(tamanhos[i]>maiorpalavra)
		{
			maiorpalavra=tamanhos[i];
			maior=i;
		}
	}
	printf("A maior palavra esta na linha %d", maior);

	if((matrix[menor][0]>='a')&&(matrix[menor][0]<='z'))
	{
		for(int i=0;matrix[menor][i]!='\0';i++)
		{
			matrix[menor][i]-=32;
		}
		//printf("%s\n", matrix[menor]);
	}
	else if((matrix[menor][0]>='A')&&(matrix[menor][0]<='Z'))
	{
		for(int i=0;matrix[menor][i]!='\0';i++)
		{
			matrix[menor][i]+=32;
		}
		//printf("%s\n", matrix[menor]);
	}
	if((matrix[maior][0]>='a')&&(matrix[maior][0]<='z'))
	{
		for(int i=0;matrix[maior][i]!='\0';i++)
		{
			matrix[maior][i]-=32;
		}
		printf("%s\n", matrix[maior]);
	}
	else if((matrix[maior][0]>='A')&&(matrix[maior][0]<='Z'))
	{
		for(int i=0;matrix[maior][i]!='\0';i++)
		{
			matrix[maior][i]+=32;
		}
		printf("%s\n", matrix[maior]);
	}
	printf("\nMatriz de palavras:\n");
	for (int i = 0; i < palavras; i++)
	{
		printf("%s ", matrix[i]);
	}
	return 0;
	
}
