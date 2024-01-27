#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main() 
{
  int n, i, j;
  char vetor[MAX], aux;
  
  printf("Digite o vetor: ");
  scanf("%s", vetor);
  n=strlen(vetor);
  for(i = 0; i < n; i++) 
  {
    for(j = i+1; j < n; j++) 
    {
      if((vetor[j] >= '0' && vetor[j] <= '9') && (vetor[i] >= 'A' && vetor[i] <= 'Z')) 
      {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      } 
      else if((vetor[j] >= '0' && vetor[j] <= '9') && (vetor[i] >= 'a' && vetor[i] <= 'z')) 
      {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      } 
      else if((vetor[j] >= 'A' && vetor[j] <= 'Z') && (vetor[i] >= 'a' && vetor[i] <= 'z')) 
      {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }
    for(int i=0;i<n;i++)  
   { 
     for(int j=i+1;j<n;j++)  
     { 
       if(vetor[i]>vetor[j])  
       { 
         aux = vetor[i]; 
         vetor[i] = vetor[j]; 
         vetor[j] = aux; 
       }  
     } 
   }
  printf("Vetor organizado na ordem: numeros, letras maiusculas e letras minusculas: ");
  for(i = 0; i < n; i++) 
  {
    printf("%c ", vetor[i]);
  }
  return 0;
}
