#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ehPrimo(int n);
int op = 0;

int main() {

    printf("Aula 02 - Exercicio02 - Primalidade:\n");
    srand( time(NULL) );
    int numero = rand() % 100;
    printf("Numero inteiro gerado aleatoriamente(1-100): %d\n", numero);

    if( ehPrimo(numero) == 1 ) {

        printf("\nO numero %d eh primo (Num. Op = %d)", numero, op);

    } else {

        printf("\nO numero %d nao eh primo (Num. Op = %d)", numero, op);

    }

    return 0;

}

int randIntervalo(int inicio, int fim ) {

    return inicio + (rand() % (fim - inicio + 1) );

}

int ehPrimo( int n ) {

    int i;
    int primo = 1;

    for( i = 2; i < (n/2); i++ ) {

        if( (n % i) == 0 ) {

            primo = 0;
            break;

        }
    }

    return primo;

}
