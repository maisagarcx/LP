//true=0; false=1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
void subString(char big[], char smol[]){
    int cont=0, isSub=0, flag=0;
    for(int i=0;big[i]!='\0';i++){
        for(int k=0;smol[k]!='\0';k++){
            do{
                 if(big[i]==smol[k]){
                     i++;
                     k++;
                 }
                 else{
                     flag=1;
                 }
            }while(smol[k]!='\0'||flag==0);
            if(flag==0){
                isSub++;
            }
            else{
                flag=0;
            }
        }
    }
    printf("%d", isSub);
}
int main(){
    char bigWord[MAX], smolWord[MAX];
    printf("Enter the big word: ");
    fgets(bigWord, MAX, stdin);
    bigWord[strlen(bigWord)-1]='\0';
    printf("Enter the smol word: ");
    fgets(smolWord, MAX, stdin);
    smolWord[strlen(smolWord)-1]='\0';
    subString(bigWord, smolWord);
    return 0;
}
