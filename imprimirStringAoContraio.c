#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void)
{
	//ler uma string qualquer e imprimir ela ao contrario
	char X[MAX],Y[MAX];
	int i,S;
	
	printf("Insira os caracteres da string: ");
	scanf("%s", X);
	S=strlen(X);
	for(i=0;i<S;i++)
	{
		Y[i]=X[S-(i+1)];
	}
	printf("%s \n", Y);
	return 0;
}
