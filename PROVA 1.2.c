#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define MAX 100

int main()
{
	char frasecompleta[MAX], tamanhos[MAX], matrix[MAX][MAX], aux[MAX];
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
	
	for(int i=0;matrix[maior][i]!='\0';i++)
	{
		aux[i]=matrix[maior][i];
		matrix[maior][i]=matrix[menor][i];
		matrix[menor][i]=aux[i];
	}
	
	printf("\nSua frase trocada e:\n");
	for (int i = 0; i < palavras; i++)
	{
		printf("%s ", matrix[i]);
	}
	return 0;
	
}
