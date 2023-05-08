#include <stdio.h>
int main()
{
	char X;
	
	printf("Escolha A para lapis, B para caneta, C para borracha e D para caderno \n");
	scanf("%c", &X);
	
	switch(X)
	{
		case 'A':
		case 'a':
			printf("Voce comprou um lapis!");
			break;
		case 'B':
		case 'b':
			printf("Voce comprou uma caneta!");
			break;
		case 'C':
		case 'c':
			printf("Voce comprou uma borracha!");
			break;
		case 'D':
		case 'd':
			printf("Voce comprou um caderno!");
			break;
		default:
			printf("Escolha uma opcao valida!");	
	}	
	return 0;
}
