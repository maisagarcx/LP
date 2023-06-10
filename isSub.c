#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
void subString(char big[], char smol[]){
    int isSub=0, j;
    for(int i=0;big[i]!='\0';i++){
        j=0;
        while(big[i+j]==smol[j]){
            ++j;
            if(smol[j]=='\0'){
                ++isSub;
                break;
            }
        }
    }
    printf("The smol word shows up %d times in the big word.", isSub);
}
     
int main(){
    char bigWord[MAX], smolWord[MAX];
    printf("Enter the big word: ");
    fgets(bigWord, MAX, stdin);
    bigWord[strcspn(bigWord, "\n")] = '\0';
    printf("Enter the smol word: ");
    fgets(smolWord, MAX, stdin);
    smolWord[strcspn(smolWord, "\n")] = '\0';
    subString(bigWord, smolWord);
    return 0;
}
