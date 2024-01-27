#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int readSize(int size){
	do{
		scanf("%d", &size);
		if(size<=1){
			printf("Try again, not valid size: ");
		}
	}while(size<=1);	
	return size;
}
void readWord(char string[MAX], int size){
	int lenght;
	do{
		scanf("%99s", string);
		lenght=strlen(string);
		if(lenght>size){
			printf("Your word does not fit the matriz you input, try again: ");
		}
	}while(lenght>size);

}
void readMatrix(char M[MAX][MAX], int size){
	getchar();
	printf("\nPlease input your matrix:\n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf(" %c", &M[i][j]);
		}
	}
}
void printMatrix(char M[MAX][MAX], int size){
	printf("\n Your matrix is:\n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("%c ", M[i][j]);
		}
		printf("\n");
	}
}
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
int searchWordInColumns(char M[MAX][MAX], int size, char W[MAX]){
	int sizeOfWord, flag=0, count=0;
	sizeOfWord=strlen(W);
	for(int j=0;j<size;j++){
		int i=0;
		int k=0;
		do{
			if(M[i][j]==W[k]){
				flag+=1;
				i++;
				k++;
			}
			else{
				i++;
			}
		}while(flag!=sizeOfWord&&i<size);
		if(flag==sizeOfWord){
			count+=1;
		}
		flag=0;
	}
	return count;
}
int main() {
	int size=0;
	char matrix[MAX][MAX], word[MAX];
	
	printf("Please input the size of your matrix: ");
	size = readSize(size);
	
	printf("Please input a word: ");
	readWord(word, size);
	
	readMatrix(matrix, size);
	printMatrix(matrix, size);
	
	int showsUpInLines = searchWordInLines(matrix, size, word);
	printf("\nYour word shows up %d times in the lines of your matrix", showsUpInLines);
	int showsUpInColumns = searchWordInColumns(matrix, size, word);
	printf("\nYour word shows up %d times in the columns of your matrix", showsUpInColumns);
	return 0;
}
