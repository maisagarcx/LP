#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int searchWordInLines(char M[MAX][MAX], int size, char W[MAX]){
	int sizeOfWord, flag=0, count=0;
	sizeOfWord=strlen(W);
	for(int i=0;i<size;i++){
		int j=0;
		int k=0;
		do{
			if(M[i][j]==W[k]){
				flag+=1;
				j++;
				k++;
			}
			else{
				j++;
			}
		}while(flag!=sizeOfWord&&j<size);
		if(flag==sizeOfWord){
			count+=1;
		}
		flag=0;
	}
	return count;
}

int readSize(int size){
	do{
		scanf("%d", &size);
		if(size<=1){
			printf("Try again, not valid size: ");
		}
	}while(size<=1);	
	return size;
}

void readWords(char strings[MAX], int size, int howManyStrings, char matrix[MAX][MAX]){
	int lenght, count=0;
	do{
		do{
		printf("\nPlease input the word you want to search: ");
		scanf("%99s", strings);
		getchar();
		lenght=strlen(strings);
			if(lenght>size){
				printf("Your word does not fit the your matrix, try again: ");
			}
		}while(lenght>size);
		int showsUpInLines = searchWordInLines(matrix, size, strings);
		printf("Your word %s shows up %d times in your matrix", strings, showsUpInLines);
		count+=1;
	}while(count!=howManyStrings);
}

void readMatrix(char M[MAX][MAX], int size){
	getchar();
	printf("Please input your matrix:\n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf(" %c", &M[i][j]);
		}
	}
	system("cls");
}

void printMatrix(char M[MAX][MAX], int size){
	printf("Your matrix is:\n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("%c ", M[i][j]);
		}
		printf("\n");
	}
}

int readHowManyStrings(int S){
	do{
		scanf("%d", S);
	}while(S<1);
	return S;
}

int main() {
	int size=0, howManyStrings=0;
	char matrix[MAX][MAX], word[MAX];
	
	printf("Please input the size of your matrix: ");
	size = readSize(size);
	printf("How many strings you want to search? ");
	howManyStrings = readSize(howManyStrings);
	
	readMatrix(matrix, size);
	printMatrix(matrix, size);
	
	readWords(word, size, howManyStrings, matrix);
	
	return 0;
}
