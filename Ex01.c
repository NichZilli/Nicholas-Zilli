#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeroAleatorio(int inicio, int fim);
int primo(int n);
int cont = 0;

int main() {

    printf("Aula 07 - Exercicio 01 - Primalidade:\n");
    srand( time(NULL) );
    int n = numeroAleatorio(1,100);
    for(int i = 0; i < 1; i++) {
        printf("Numero inteiro gerado aleatoriamente (1-100): %d\n", n);
    }

    if (primo(n) == 1) {

        printf("\nO numero %d eh Primo (Num. Op. - %d)", n, cont);

    } else {

        printf("\nO numero %d nao eh Primo (Num. Op. - %d)", n, cont);

    }

    return 0;

}

int numeroAleatorio(int inicio, int fim ) {

    return inicio + (rand() % (fim - inicio + 1) );

}

int primo(int numero) {

    int i;
    int primo = 1;

    for(int i = 2; i <= numero / 2; i++) {

        if(numero % i == 0) {
            primo = 0;
            break;
        }

        cont++;
    }

    return primo;
}
