#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(){

    int tamanho, i, j;
    char matriz[MAX][MAX];

    printf("Escolha o tamanho da matriz: ");
    scanf("%d", &tamanho);

    while(tamanho<0 || tamanho>100)
    {
        printf("Tamanho impossivel.");
        return;
    }

    for(int i=0;i<tamanho;i++)
    {
        for(int j=0;j<tamanho;j++)
        {
            if(i==j || j==tamanho-(i+1))
            {
                matriz[i][j]= '*';
            }
            else
            matriz[i][j]= ' ';
        }
    }
    for(int i=0;i<tamanho;i++)
    {
        for(int j=0;j<tamanho;j++)
        {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}
