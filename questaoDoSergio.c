#include <stdio.h>
#include <string.h>
#define MAX 100
void readLimitsOfMatrix(int *A, int *B){
  do{
    printf("Input the number of lines: ");
    scanf("%d", A);
  }while(*A<=1);
  do{
    printf("Input the number of columns: ");
    scanf("%d", B);
  }while(*B<=1);
}
void readMatrix(int A, int B, int M[MAX][MAX]){
  for(int i=0;i<A;i++){
    for(int j=0;j<B;j++){
      printf("Input your matrix[%d][%d]: ", i, j);
      scanf("%d", &M[i][j]);
    }
  }
}
void printMatrix(int A, int B, int M[MAX][MAX]){
  printf("\nYour matrix is:\n");
  for(int i=0;i<A;i++){
    for(int j=0;j<B;j++){
      printf("%d ", M[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}
void searchHighestNumber(int A, int B, int M[MAX][MAX], int vector[MAX], int *S){
  int highest, k=0;
  for(int i=0;i<A-1;i+=1){
    for(int j=0;j<B-1;j+=1){
      highest=M[i][j];
      if(M[i][j+1]>=highest){
        highest=M[i][j+1];
      }
      if(M[i+1][j]>=highest){
        highest=M[i+1][j];
      }
      if(M[i+1][j+1]>=highest){
        highest=M[i+1][j+1];
      }
      vector[k]=highest; 
      k+=1;
    }
  }
  *S=k;
}
void printVector(int V[MAX], int S){
  for(int i=0;i<S;i++){
    printf("%d ", V[i]);
  }
}
int main(void){
  int lines, columns, sizeOfVector=0;
  int matrix[MAX][MAX], vector[MAX];
  printf("This program will search in a matrix, the highest number in each and every block 2x2 possible.\n");
  readLimitsOfMatrix(&lines, &columns);
  readMatrix(lines, columns, matrix);
  printMatrix(lines, columns, matrix);
  searchHighestNumber(lines, columns, matrix, vector, &sizeOfVector);
  printf("The size of your vector is: %d\n", sizeOfVector);
  printVector(vector, sizeOfVector);
  return 0;
}
