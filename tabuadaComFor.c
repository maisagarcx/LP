#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("A tabuada de %d: \n", i);
		for(j=0;j<=10;j++)
		printf("%d - i*j = %d \n", j,i*j);
	}
	return 0;
}
