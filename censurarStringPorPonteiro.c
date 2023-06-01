#include <stdlib.h>
#include <stdio.h>
#define MAX 100

void lerstring(char *A){
	gets(A);
}
void lersimbolo(char *B){
	scanf("%c", B);
}
void substituindo(char *C, char simbolo){
	for(int i=0;*C!='\0';i++){
		if(*C>='0'&&*C<='9'){
		*C=simbolo;
		}
		C++;
	}
}
int main()
{
	char string[MAX];
	char simbolo;
	
	printf("Digite uma string: ");
	lerstring(string);
	printf("Digite um simbolo para censurar sua string: ");
	lersimbolo(&simbolo);
	substituindo(string, simbolo);
	printf("%s", string);

}
