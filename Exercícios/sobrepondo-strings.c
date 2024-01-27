#include <stdlib.h>
#include <stdio.h>
#define MAX 100

void readstr(char *X){
	gets(X);
}
void strcopy(char *A, char *B){
	int i;
	for(i=0;*B!='\0';i++){
		*A=*B;
		A++;
		B++;
	}
	for(i;*A!='\0';i++){
		*A=' ';
		A++;
	}
}
int main()
{
	char stringA[MAX], stringB[MAX];
	char simbolo;
	
	printf("Digite a string 1: ");
	readstr(stringA);
	printf("Digite a string 2: ");
	readstr(stringB);
	strcopy(stringA, stringB);
	printf("%s", stringA);

}
