#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
    int samesize, size1, size2;
    char matrix1[MAX][MAX], matrix2[MAX][MAX], matrix3[MAX][MAX];

    do
    {
        printf("Insira a quantidade de colunas da primeira matriz (que sera a quantidade de linhas da segunda matriz): ");
        scanf("%d", &samesize);
    }while(samesize<=0 || samesize>MAX);

    do
    {
        printf("Insira a quantidade de linhas da primeira matriz: ");
        scanf("%d", &size1);
    }while(size1<=0 || size1>MAX);

    do
    {
        printf("Insira a quantidade de colunas da segunda matriz: ");
        scanf("%d", &size2);
    }while(size2<=0 || size2>MAX);

    printf("\nMatrix 1:\n");
    for(int k=0;k<samesize;k++)
    {
        for(int i=0;i<size1;i++)
        {
            printf("Insira o valor de: Matrix1[%d][%d]: ", k+1, i+1);
            scanf("%d", &matrix1[k][i]);
        }
    }
    printf("\nMatrix 2:\n");
    for(int i=0;i<size2;i++)
    {
        for(int j=0;j<samesize;j++)
        {
            printf("Insira o valor de: Matrix2[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for(int k=0;k<size2;k++)
    {
        for(int j=0;j<size1;j++)
        {
            for(int i=0;i<samesize;i++)
            {
                matrix3[k][j] += (matrix1[k][i]*matrix2[i][j]);
            }
            printf("%d ", matrix3[k][j]);
        }
        printf("\n");
    }

    return 0;
}
