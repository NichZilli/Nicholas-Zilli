#include <stdio.h>
#include <stdlib.h>

int buscaMaior(int vetor[], int indice, int tamanho);

int main() {

    int tam;
    printf("Entre com o tamanho do array de inteiros: ");
    scanf("%d", &tam);

    int vet[tam];

    for(int i = 0; i < tam; i++){
        printf("Digite o valor para a posicao %d do Array: ", i+1);
        scanf("%d", &vet[i]);
    }

    int m;
    m = buscaMaior(vet, 0, tam);

    printf("\nO maior valor do Array eh %d", m);

    return 0;

}


int buscaMaior(int vetor[], int indice, int tamanho) {

    if (indice == tamanho - 1) {

        return vetor[indice];

    } else {

        int maior = buscaMaior(vetor, indice + 1, tamanho);

        if (maior > vetor[indice]) {

            return maior;

        } else {

            return vetor[indice];

        }
    }
}
