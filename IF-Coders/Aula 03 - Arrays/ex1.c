#include <stdio.h>
#include <stdlib.h>

/* Partindo dos conceitos de array de uma dimensão, peça ao usuário o tamanho do array
e dois valores do tipo “float”, atribua a soma desses dois valores em todas as posições do array.
Após isso, imprimir o array com todos os valores.

Autor: Zilli */

int main() {

    int tamanho;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    float array1[tamanho];
    float n1;
    float n2;

    printf("\nDigite o primeiro valor decimal: ");
    scanf("%f", &n1);

    printf("\nDigite o segundo valor decimal: ");
    scanf("%f", &n2);

    for(int i = 0; i < tamanho; i++) {

        array1[i] = n1 + n2;
    }

    printf("\n");

    for(int i = 0; i < tamanho; i++) {

        printf("%.2f ", array1[i] );
    }

    printf("\n");

    return 0;

}
