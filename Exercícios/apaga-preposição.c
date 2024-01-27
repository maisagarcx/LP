#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100
/*
int words(char A[]){
	char AbName[MAX];
	int words=1;
	for(int i=1;A[i]!='\0';i++){
		if(A[i]==' '){
			words++;
		}
	}
	return words;
}
int matrixOfPrepo(char A[], int words){
	char matrix[MAX][MAX];
	int i=0, j=0;
	for(int i=0;A[i]!='\0';i++){
		if(A[i]=='\n'||A[i]==' '){
			matrix[i][j]='\0';
			i++;
			j=0;
		}
		else{
			matrix[i][j]=A[i];
			j++;
		}
	}
	for(int i=0;i<words;i++){
		if(matrix[i]=="da"||matrix[i]=="de"||matrix[i]=="dos"||matrix[i]=="das"||matrix[i]=="do"){
			matrix[i]=' ';
		}
	}
	return matrix;
}
*/
int abbreviationOfName(char A[]){
	char NewName[MAX];
	int j=1;
	for(int i=0;A[i]!='\0';i++){
		A[i]=toupper(A[i]);
	}
	for(int i=0;A[i]!='\0';i++){
		if(A[i]=='D'&&A[i+1]=='A'&&A[i+2]==' '){
			A[i]=' ';
			A[++i]=' ';
		}
		if(A[i]=='D'&&A[i+1]=='E'&&A[i+2]==' '){
			A[i]=' ';
			A[++i]=' ';
		}
		if(A[i]=='D'&&A[i+1]=='O'&&A[i+2]==' '){
			A[i]=' ';
			A[++i]=' ';
		}
		if(A[i]=='D'&&A[i+1]=='O'&&A[i+2]=='S'&&A[i+3]==' '){
			A[i]=' ';
			A[++i]=' ';
			A[i+1]=' ';
		}
		if(A[i]=='D'&&A[i+1]=='O'&&A[i+2]=='S'&&A[i+3]==' '){
			A[i]=' ';
			A[++i]=' ';
			A[i+1]=' ';
		}
		if(A[i]=='D'&&A[i+1]=='A'&&A[i+2]=='S'&&A[i+3]==' '){
			A[i]=' ';
			A[++i]=' ';
			A[i+1]=' ';
		}
	}
	printf("%s\n", A);
	for(int i=1;A[i]!='\0';i++){
		NewName[0]=A[0];
		if(A[i]==' '&&A[i+1]!=' '){
			NewName[j++]='.';
			NewName[j]=A[i+1];
			j++;
		}
	}
	printf("%s\n", NewName);
	/*
	NewName[0]=A[0];
	for(int i=1;A[i]!='/0';i++){
		if(A[i]==' '&&isalpha(A[++i])){
			NewName[j]=A[++i];
			j++;
		}
	}
	printf("%s\n", NewName);
	for(int i=1;A[i]!='\0';i++){
		if(A[i]==' '&&A[i++]!=' '){
			AbName[0]=A[0];
			++j;
			//AbName[j]='.';
			AbName[j]=A[i+1];
			j++;
		}
	}
	printf("%s\n", AbName);
	*/
}
int main(){
	char fullName[MAX], matrix[MAX][MAX];
	int words;
	
	printf("Input your full name: ");
	fgets(fullName, MAX, stdin);
	//words(fullName);
	//matrixOfPrepo(fullName, words);
	abbreviationOfName(fullName);
	

	return 0;
}
