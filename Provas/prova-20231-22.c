#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
void readString(char *str){
	fgets(str, MAX, stdin);
	//fflush(stdin);
	str[strcspn(str,"\n")]='\0';
}
void findAndCensorWO(char S[MAX]){
	int i;
	for(i=0;S[i]!='\0';i++){
		if(i==0){
			if(S[i]==S[i+2]&&S[i+2]==S[i+4]&&S[i+1]==S[i+3]&&(S[i+5]==' '||S[i+5]=='\0')){
				S[i]='*';
				S[i+1]=S[i+2]=S[i+3]=S[i+4]=S[i+5]=' ';
			}
			else if(S[i]==S[i+2]&&(S[i+3]<='a'&&S[i+3]>='z')&&(S[i+3]==' '||S[i+3]=='\0')){
				S[i]='*';
				S[i+1]=S[i+2]=' ';
			}
			else if(S[i]==S[i+3]&&S[i+1]==S[i+2]&&(S[i+4]==' '||S[i+4]=='\0')){
				S[i]='*';
				S[i+1]=S[i+2]=S[i+3]=S[i+4]=' ';
			}
		}
		else{
			if(S[i-1]==' '&&S[i]==S[i+2]&&(S[i+3]==' '||S[i+3]=='\0')){
				S[i]='*';
				S[i+1]=S[i+2]=' ';
			}
			else if(S[i-1]==' '&&S[i]==S[i+2]&&S[i+2]==S[i+4]&&S[i+1]==S[i+3]&&(S[i+5]==' '||S[i+5]=='\0')){
				S[i]='*';
				S[i+1]=S[i+2]=S[i+3]=S[i+4]=S[i+5]=' ';
			}
			else if(S[i-1]==' '&&S[i]==S[i+3]&&S[i+1]==S[i+2]&&(S[i+4]==' '||S[i+4]=='\0')){
				S[i]='*';
				S[i+1]=S[i+2]=S[i+3]=S[i+4]=' ';
			}
		}
	}
}
void findAndCensor(char *M){
	int i=0;
	char *S = strtok(M," ");
	while(S!="\n"){
		//printf("%d", strlen(S));
		if(strlen(S)==3){
			if(S[i]==S[i+2]){
				S[i]='*';
				S[i+1]=S[i+2]=' ';
			}
		}	
		else if(strlen(S)==4){
			if(S[i]==S[i+3]&&S[i+1]==S[i+2]){
				S[i]='*';
				S[i+1]=S[i+2]=S[i+3]=' ';
			}
		}	
		else if(strlen(S)==5){
			if(S[i]==S[i+2]&&S[i+2]==S[i+4]&&S[i+1]==S[i+3]){
				S[i]='*';
				S[i+1]=S[i+2]=S[i+3]=S[i+4]=' ';
			}
		}
		printf("%s ", S);
		S=strtok(NULL, " ");
	}
}
int main(){
	char str[MAX];
	printf("Input your string: ");
	readString(str);
	printf("%s\n", str);
	findAndCensor(str);
	printf("%s", str);
	return 0;
}
