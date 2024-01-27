#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void)
{
	//ler uma string qualquer e imprimir ela ao contrario
	char X[MAX];
	int i,S;
	
	printf("Insira os caracteres da string: ");
	scanf("%s", X);
	S=strlen(X);
	for(i=S-1;i>=0;i--)
	{
		printf("%c", X[i]);
	}
	return 0;
}
