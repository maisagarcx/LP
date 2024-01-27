#include <stdio.h>
int main()
{
	char X;
	
	printf("Escolha A para lapis, B para caneta, C para borracha e D para caderno \n");
	scanf("%c", &X);
	
	if(X == 'A' || X == 'a')
		printf("Voce comprou um lapis!");
	else if(X == 'B' || X == 'b')
		printf("Voce comprou uma caneta!");
	else if(X == 'C' || X == 'c')
		printf("Voce comprou uma borracha!");
	else if(X == 'D' || X == 'd')
		printf("Voce comprou um caderno!");
	else
		printf("Escolha uma opcao valida!");
	return 0;
}
