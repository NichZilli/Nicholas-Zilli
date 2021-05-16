/*
Escreva um programa que leia três strings.
A seguir imprimir as 3 strings em ordem alfabética.
COLETÂNEA DE EXERCÍCIOS E NOTAS DE AULA EM LINGUAGEM DE PROGRAMAÇÃO C - Prof Dr David Buzatto (v1.0 - 2019).
Autor: Zilli
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main() {

    char nome[3][41];
    char controle[41];
    int i;
    int j;
    int comparacao;//comparação = strcmp;

    for( i = 0; i < 3; i++ ) {

    printf("String %d: ",  i + 1 );
    fgets(nome[i], 41, stdin );
    nome[i] [ strlen( nome[i] )-1] = '\0';

    }

    for( i = 0; i < 3; i++ ) {

        for(j = i + 1; j < 3 ; j++) {//i + 1 (printf);

            comparacao = strcmp( nome[i], nome[j] );

            if( comparacao > 0 ) {

                strcpy( controle, nome[j] );//variável temporária;
                strcpy( nome[j], nome[i] );
                strcpy( nome[i], controle);

            }
        }
    }

    printf("\nEm ordem alfabetica: %s, %s e %s\n", nome[0], nome[1], nome[2] );

    return 0;

    }
