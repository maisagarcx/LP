#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 1024

void readString(char *fullName) {
    fgets(fullName, MAX_SIZE, stdin); // Lê a string até o '\n'
}

void printAbbreviation(char *fullName) {
    char *token = strtok(fullName, " ");  // Separa a string em tokens, usando o espaço como delimitador
    
    // Enquanto houver tokens na string, o loop continua
    while (token != NULL) { 
        // Se o token não for uma preposição, imprime a primeira letra do token e um ponto
        if (strcmp(token, "de") != 0 && strcmp(token, "do") != 0 && strcmp(token, "da") != 0 && strcmp(token, "dos") != 0 && strcmp(token, "das") != 0) 
            printf("%c.", token[0]);
        token = strtok(NULL, " "); // Pega o próximo token
    }
}

int main() {
    char fullName[MAX_SIZE];

    printf("Digite o nome completo: ");
    readString(fullName); 
    printAbbreviation(fullName);
    return 0;
}
