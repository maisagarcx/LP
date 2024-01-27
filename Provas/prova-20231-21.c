#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int readSize(){
	int size = 0;
    scanf("%d", &size);
    //getchar();
    //printf("%d\n", size);
    return size;
}
void readMatrix(int SL, int SC, char M[MAX][MAX]){
	//printf("%d\n", S);
	getchar();
	for(int i=0;i<SL;i++){
		for(int j=0;j<SC;j++){
			printf("Input M[%d][%d]: ", i,j);
			scanf("%c", &M[i][j]);
			getchar();
		}
	}
/*
	for(i=0;i<S;i++){
		for(j=0;j<S;j++){
			printf("%c", M[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<S;i++){
		for(j=0;j<S;j++){
			printf("Input M[%d][%d]: ", i+1,j+1);
			scanf("%c", M[i][j]);
		}
	}
*/
}
void showMatrix(int SL, int SC, char M[MAX][MAX]){
	for(int i=0;i<SL;i++){
		for(int j=0;j<SC;j++){
			printf("%c", M[i][j]);
		}
		printf("\n");
	}
}
int countChar(int SL, int SC, char M[MAX][MAX]){
	int count=0;
	for(int i=0;i<SL;i++){
		for(int j=0;j<SC;j++){
			if(M[i][j]=='*'&&M[i+1][j]=='*'&&M[i+1][j+1]=='*'&&(j+1)<SL){
				++count;
			}
		}
	}
	return count;
}
void showCount(int count){
	printf("%d\n", count);
}
int main(){
	int sizeL, sizeC, count;
	char matrix[MAX][MAX];
	printf("Input the lines of the matrix: ");
	sizeL = readSize();
	printf("%d\n", sizeL);
	printf("Input the columms of the matrix: ");
	sizeC = readSize();
	printf("%d\n", sizeC);
	readMatrix(sizeL, sizeC, matrix);
	showMatrix(sizeL, sizeC, matrix);
	count = countChar(sizeL, sizeC, matrix);
	showCount(count);
	return 0;
}

