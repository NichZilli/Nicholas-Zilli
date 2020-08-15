#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Ordenacao(int array[], int tam);

int main() {
    int tamanho;

    int chave;

    printf("Aula 02 - Exercicio03 - Ordenacao:\n");
    printf("\n");
    srand( time(NULL) );

    printf("Entre com o tamanho do array de inteiros: ");
    scanf("%d", &tamanho);
    int array[tamanho];
    printf("\n");
    printf("Ordenacao\n");

    printf(" Array Desord. [] = ");
    for(int i = 0; i < tamanho; i++) {
        array[i] = rand() % 100;
        printf("%d ", array[i] );
    }

    printf("- %d", array[1]);
    printf("\n");
    Ordenacao(array, tamanho);

    return 0;

}

int Ordenacao(int array[], int tam){
    int c;
    int op = 0;
    int temp = 0;

    for(int i = 0; i < tam; i++){
        printf(" Array Desord. [] = ");
        c = array[i+1];
        for(int j = 0; j < tam; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                op++;
            }
            printf("%d ", array[j]);
        }
        if( c > 100 ) {
            break;
        } else {
            printf("- %d\n", c);
        }
    }
    printf("\n");

    printf(" Array Ord.    [] = ");
    for(int i = 0; i < tam; i++){
        printf("%d ", array[i]);
    }
    printf("\n Numero de Operacoes para Ordenacao: %d", op);
}
