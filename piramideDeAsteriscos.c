#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int i,j,k, varia;
	printf("Insira o numero de linhas da piramide: ");
	scanf("%d", &varia);
	for(i=1;i<=varia;++i) //mudanca linha por linha
	{
		for(j=1;j<=(varia-i);++j) //adiciona os espacos que diminuem de 1 em 1
		printf(" ");
		for(k=1;k<=(2*i-1);k++)
		printf("*");
		printf("\n");
	}
	
	return 0;
}
