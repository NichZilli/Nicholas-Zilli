#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeroAleatorio(int inicio, int fim);
int buscaLinear(int v[], int tamanho, int p);
int contador  = 0;

int main() {

    printf("Aula 07 - Exercicio 02 - Busca Linear:\n");
    int tamanho;
    printf("Entre com o tamanho do array de inteiros: ");
    scanf("%d", &tamanho);
    int vetor[tamanho];
    srand( time(NULL) );
    printf("Array Gerado = ");

    for(int i = 0; i < tamanho; i++) {

        vetor[i] = numeroAleatorio(1,100);
        printf("%d ", vetor[i] );
    }

    int n;
    printf("\nEntre com o valor inteiro a ser procurado: ");
    scanf("%d", &n);

    buscaLinear(vetor, tamanho, n);

    return 0;

}

int numeroAleatorio(int inicio, int fim ) {

    return inicio + (rand() % (fim - inicio + 1) );

}

int buscaLinear(int v[], int tamanho, int numero) {

    for(int i = 0; i < tamanho; i++) {

        if(v[i] == numero) {

            printf("\nO Valor %d foi encontrado na posicao %d\n", numero, i+1);
            break;

        } else {

            contador++;

        }
    }

    if(contador == tamanho) {

        printf("\nO Valor nao foi encontrado no Array!");
    }

}
