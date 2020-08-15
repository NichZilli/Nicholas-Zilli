#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeroAleatorio(int inicio, int fim);
int vetorOriginal(int vetor[], int tamanho);
int vetorOrdenado(int vetor[], int tamanho);
int buscaBinaria(int vetor[], int inicio, int fim, int valor);
int tam;

int main() {

    printf("Aula 07 - Exercicio 03 - Busca Binaria:\n");
    printf("Entre com o tamanho do array de inteiros: ");
    scanf("%d", &tam);
    srand( time(NULL) );
    int vet[tam];
    printf("Array Original = ");
    vetorOriginal(vet, tam);
    printf("\n");
    printf("Array Ordenado = ");
    vetorOrdenado(vet, tam);
    int busca;
    printf("\nEntre com o valor inteiro a ser procurado: ");
    scanf("%d", &busca);
    printf("\n");
    int posicao = buscaBinaria(vet, 0, tam, busca);

    if(posicao == -1) {

        printf("\nO Valor %d nao foi encontrado!", busca);

    } else {

        printf("\nO Valor %d foi encontrado na posicao %d", busca, posicao + 1);

    }

    return 0;

}

int numeroAleatorio(int inicio, int fim ) {

    return inicio + (rand() % (fim - inicio + 1) );

}

int vetorOriginal(int vetor[], int tamanho) {

    for(int i = 0; i < tamanho; i++) {

        vetor[i] = numeroAleatorio(1,100);
        printf("%d ", vetor[i] );
    }

}

int vetorOrdenado(int vetor[], int tamanho) {

    int temp = 0;

    for(int i = 0; i < tamanho; i++) {

        for(int j = 0; j < tamanho; j++) {

            if(vetor[i] < vetor[j]) {

                temp = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = temp;
            }
        }

    }

    for(int i = 0; i < tamanho; i++) {

       printf("%d ", vetor[i] );

    }
}

int buscaBinaria(int vetor[], int inicio, int fim, int valor) {

    int meio = (inicio + fim) / 2;

    if(vetor[meio] == valor) {

        return meio;
    }

    if(inicio >= fim) {

        return -1;
    }

    else {

        if(vetor[meio] < valor) {

            return buscaBinaria(vetor, meio + 1, fim, valor);

        } else {

            return buscaBinaria(vetor, inicio, meio - 1, valor);

        }
    }
}
