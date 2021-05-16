/*
Escreva um programa para ler uma sentença e apresentar:
• O primeiro caractere da sentença;
• O último caractere da sentença;
• O número de caracteres existente na sentença.
COLETÂNEA DE EXERCÍCIOS E NOTAS DE AULA EM LINGUAGEM DE PROGRAMAÇÃO C - Prof Dr David Buzatto (v1.0 - 2019).
Autor - Zilli
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main() {

    char nome[41];

    printf("Sentenca: ");
    fgets( nome, 41, stdin );
    nome[ strlen(nome)-1] = '\0';

    printf("Primeiro caractere: %c\n", nome[0] );
    printf("Ultimo caractere: %c\n", nome[ strlen(nome)-1] );
    printf("Numero de caracteres: %d", strlen(nome) );

    return 0;

    }
