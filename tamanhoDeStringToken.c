#include <stdio.h>
#include <string.h>
#define MAX 100
void readString(char str[MAX]){
	fgets(str, MAX, stdin);
	str[strcspn(str, "\n")]='\0';
}
void startVector(int *A) {
	for(int i=0; A[i]!='\0'; i++)
		A[i]=0;
}
void smolAndBig(char *str){
	int A[MAX], i=0;
	char *token = strtok(str, " ");
	startVector(A);
	while(token != NULL){
		if(strcmp(token, " ")!=0){
			printf("token %d is: %s", i, token);
			A[i]=strlen(token);
			printf("\ntamanho do vetor %d is %d \n", i, A[i]);
			++i;
		}
		token = strtok(NULL, " ");
	}
}
int main(){
	char str[MAX];
	printf("Input a string: ");
	readString(str);
	smolAndBig(str);
}
