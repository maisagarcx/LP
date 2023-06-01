#include <stdlib.h>
#include <stdio.h>
#define MAX 100
void lerstring(char *A)
{
	char string[MAX];
	fgets(string, MAX, stdin);
	*A = string;
}
void lersimbolo()
{
	char simbolo;
	scanf("%c", simbolo)
}
int main()
{
	char string[MAX];
	char simbolo;
	
	printf("Digite uma string: ");
	lerstring(string);
	printf("Digite um simbolo para censurar sua string: ");
	lersimbolo()
	//scanf(&simbolo);
	//printf("%s", );
}
