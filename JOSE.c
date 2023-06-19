#include <stdio.h>
#include <string.h>
#define MAX 100
void readString(char *str){
	fgets(str, MAX, stdin);
	str[strcspn(str,"\n")]='\0';
}
void findAndCensor(char *M){
	int i=0;
	char *S = strtok(M," ");
	while(S!=NULL){
		char newstr[MAX];
		if(strlen(S)==3){
			if(S[i]==S[i+2]){
				S[i]='*';
				printf("%c ", S[i]);
			}
		}	
		else if(strlen(S)==4){
			if(S[i]==S[i+3]&&S[i+1]==S[i+2]){
				S[i]='*';
				printf("%c ", S[i]);
			}
		}	
		else if(strlen(S)==5){
			if(S[i]==S[i+2]&&S[i+2]==S[i+4]&&S[i+1]==S[i+3]){
				S[i]='*';
				printf("%c ", S[i]);
			}
		}
		else{
			printf("%s ", S);
		}
		S=strtok(NULL, " ");
	}
}
int main(){
	char str[MAX];
	printf("Input your string: ");
	readString(str);
	printf("Original string: %s\n", str);
	findAndCensor(str);
	return 0;
}
