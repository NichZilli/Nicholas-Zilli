#include <stdio.h>
#include <stdlib.h>

/*
 * Escreva um programa que peça para o usuário fornecer dois números
 * inteiros. Se o primeiro número for menor ou igual ao segundo, o programa deve exibir
 * todos os números no intervalo entre os números digitados em ordem crescente. Caso o
 * primeiro número seja maior que o segundo, o programa deve exibir todos os números
 * no intervalo entre os números digitados emordem decrescente. (COLETÂNEA DE EXERCÍCIOS E NOTAS DE AULA EM LINGUAGEM DE PROGRAMAÇÃO C - Prof David Buzatto)
 * Autores - Emerson Lima e Nicholas Zilli
 */

    int main() {

    int n1;
    int n2;

    printf( "N1: " );
    scanf( "%d", &n1 );

    printf( "N2: " );
    scanf( "%d", &n2 );

    printf("\n");

        if ( n1 <= n2 ) {

            for ( int i = n1; i <= n2; i++ ) {

                    printf( "%d ", i );
            }

        } else {

            for ( int i = n1; i >= n2; i-- ) {

                printf( "%d ", i);
            }

        }

    return 0;

    }
