#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Aula 02 - Exercicio01 - Maior Elemento do Array:\n");
    printf("\n");
    int tamanho;
    printf("Entre com o tamanho do Array de Inteiros: ");
    scanf("%d", &tamanho);
    int array[tamanho];
    int cont = 0;
    int c = 0;

    for (int i = 0; i < tamanho; i++ ) {

        printf("Digite o valor para a posicao %d do Array: ",i+1);
        scanf("%d", &array[i] );
        cont++;

    }

    int arrayMax(int A[], int n) {

        int currentMax = A[0];
        for( int i = 1; i < n; i++ ) {

            if(A[i] > currentMax) {

                currentMax = A[i];
                c++;
            }
        }

        return currentMax;

    }

    cont -= c;

    printf("\n");
    printf("O maior elemento do Array eh: %d (Num. Operacoes = %d)", arrayMax(&array, tamanho), cont );

    return 0;

}
