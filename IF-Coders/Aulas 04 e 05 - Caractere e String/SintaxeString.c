#include <string.h>
#include <stdio.h>

int main(){
    char string[30]; // Declarando a String

    // Pegando o nome do usuário
    printf("Escreva seu nome: ");
    fgets( string, 30, stdin );
    string[strlen(string) - 1] = '\0';

    // Imprimindo usando a função do puts que já imprime com o pulo de linha
    printf("Seu nome eh: ");
    puts( string );

    return 0;
}
