#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  int i,j,k,l,m,p,x,y,linhas;
  printf("Insira o numero de linhas da piramide: ");
  scanf("%d", &linhas);
  m=linhas;
  for(i=linhas;i>=0;i--)
    {
      for(j=0;j<(linhas-i);j++)
        {
          printf(" ");
        }
        printf("*");
        if(i==0)
        break;
      for(l=0;l<(2*m-1);l++)
        {
          printf(" ");
        }
        m--;
      printf("*\n");
    }
  printf("\n");
  x=linhas;
  for(p=1;p<=linhas;p++)
    {
      for(j=0;j<(linhas-p);j++)
        {
          printf(" ");
        }
        printf("*");
      for(y=0;y<(2*p-1);y++)
        {
          printf(" ");
        }
        x--;
      printf("*\n");
    }
  return 0;
}
