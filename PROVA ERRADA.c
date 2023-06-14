#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
int readSize(){
    int size;
    do{
		scanf("%d", &size);
	}while(size>MAX);
	return size;
}
void readMatrix(int size, char M[MAX][MAX]){
    int i, j;
    printf("Input your matrix:\n");
    for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf(" %c", &M[i][j]);
		}
	}
	printf("Your matrix is:\n");
}
void showMatrix(int size, char M[MAX][MAX]){
    int i, j;
    for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%c ", M[i][j]);
		}
		printf("\n");
	}
}
void readWord(int size, char word[MAX]){
    getchar();
    fflush(stdin);
    scanf("%s", word);
}
void findWord(int size, char word[MAX], char matrix[MAX][MAX]){
    int i, j, k, test=0;
    printf("\nCom Linhas\n");
	for (i = 0; i < size; i++) {
	    for (j = 0; j < size; j++) {
	        for (k = 0; word[k] != '\0' && (j+k)<size; k++) {
	            if (word[k] == matrix[i][j+k]) {
	                test++;
	            }
	        }
	         if (test == strlen(word)-1) {
	            printf("Word found\n");
	        }
	        test=0;
	    }
	}
	printf("Com colunas\n");
	for (i = 0; i < size; i++) {
	    for (j = 0; j < size; j++) {
	        for (k = 0; word[k] != '\0' && (i+k)<size; k++) {
	            if (word[k] == matrix[i+k][j]) {
	                test++;
	            }
	        }
	         if (test == strlen(word)-1) {
	            printf("Word found\n");
	        }
	        test=0;
	    }
	}
	printf("Com Diagonal Principal\n");
	for (i = 0; i < size; i++) {
	    for (j = 0; j < size; j++) {
	        for (k = 0; word[k] != '\0' && (i+k)<size, (j+k)<size; k++) {
	            if (word[k] == matrix[i+k][j+k]) {
	                test++;
	            }
	        }
	         if (test == strlen(word)-1) {
	            printf("Word found\n");
	        }
	        test=0;
	    }
	}
	printf("Com Diagonal Secundaria\n");
	for (i = 0; i < size; i++) {
	    for (j = 0; j < size; j++) {
	        for (k = 0; word[k] != '\0' && (i-k)<size, (j+k)<size; k++) {
	            if (word[k] == matrix[i-k][j+k]) {
	                test++;
	            }
	        }
	         if (test == strlen(word)-1) {
	            printf("Word found\n");
	        }
	        test=0;
	    }
	}

}
int main(){
	int test=0, i, j, k;
	char matrix[MAX][MAX], word[MAX];
	
	printf("This code is a word search:\n");
	printf("Input the size of the character matrix: ");
	int size = readSize();
    readMatrix(size, matrix);
    showMatrix(size, matrix);
	printf("Input the word you are looking for:\n");
	/*
	do{
	   fgets(word, MAX, stdin);
	}while(strlen(word)>size+1);
	*/
	readWord(size, word);
	printf("%s", word);
    //findWord(size, word, matrix);
    return 0;
}
