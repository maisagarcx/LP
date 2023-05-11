#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int i,j,k, varia;
	printf("Insira o numero de linhas da piramide: ");
	scanf("%d", &varia);
	for(i=1;i<=varia;++i)
	{
		for(j=1;j<=(varia-i);++j)
		printf(" ");
		for(k=1;k<=(2*i-1);k++)
		printf("*");
		printf("\n");
	}
	
	return 0;
}
