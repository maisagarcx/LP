#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
int main(){
	int size, test=0, i, j, k;
	char matrix[MAX][MAX];
	char word[MAX];
	printf("This code is a word search:\n");
	printf("Input the size of the character matrix: ");
	do{
		scanf("%d", &size);
	}while(size>MAX);

	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf(" %c", &matrix[i][j]);
		}
	}
	printf("Your matrix is:\n");

	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%c ", matrix[i][j]);
		}
		printf("\n");
	}

	printf("Input the word you are looking for:\n");
	getchar();
	do{
	   fgets(word, MAX, stdin);
	}while(strlen(word)>size+1);

    printf("\nCom Linhas\n");
	for (i = 0; i < size; i++) {
	    for (j = 0; j < size; j++) {
	        for (k = 0; word[k] != '\0', (j+k)<size; k++) {
	            if (word[k] == matrix[i][j+k]) {
	                test++;
	            }
	        }
	        //printf("Tam palavra %d\n", strlen(word));
	        //printf("Teste %d\n", test);
	         if (test == strlen(word)-1) {
	            printf("Word found\n");
	        }
	        test=0;
	    }
	}
	printf("Com colunas\n");
	for (i = 0; i < size; i++) {
	    for (j = 0; j < size; j++) {
	        for (k = 0; word[k] != '\0', (i+k)<size; k++) {
	            if (word[k] == matrix[i+k][j]) {
	                test++;
	            }
	        }
	        //printf("Tam palavra %d\n", strlen(word));
	        //printf("Teste %d\n", test);
	         if (test == strlen(word)-1) {
	            printf("Word found\n");
	        }
	        test=0;
	    }
	}
		
	printf("Com Diagonal Principal\n");
	for (i = 0; i < size; i++) {
	    for (j = 0; j < size; j++) {
	        for (k = 0; word[k] != '\0', (i+k)<size, (j+k)<size; k++) {
	            if (word[k] == matrix[i+k][j+k]) {
	                test++;
	            }
	        }
	        //printf("Tam palavra %d\n", strlen(word));
	        //printf("Teste %d\n", test);
	         if (test == strlen(word)-1) {
	            printf("Word found\n");
	        }
	        test=0;
	    }
	}
			
	printf("Com Diagonal Secundaria\n");
	for (i = 0; i < size; i++) {
	    for (j = 0; j < size; j++) {
	        for (k = 0; word[k] != '\0', (i-k)<size, (j+k)<size; k++) {
	            if (word[k] == matrix[i-k][j+k]) {
	                test++;
	            }
	        }
	        //printf("Tam palavra %d\n", strlen(word));
	        //printf("Teste %d\n", test);
	         if (test == strlen(word)-1) {
	            printf("Word found\n");
	        }
	        test=0;
	    }
	}

}
