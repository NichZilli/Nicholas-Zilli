#include <stdio.h>
#include <stdlib.h>

/* Partindo agora do conceito de arrays multidimensionais, dado um array de duas dimensões (3x3),
do tipo inteiro, peça para o usuário escrever os valores em cada posição da matriz. Depois imprima cada elemento da matriz.

Autor: Emerson */

int main(){
    int matriz[3][3];
    int linhas = (int) ( sizeof(matriz) / sizeof(matriz[0]) );
    int colunas = (int) ( sizeof(matriz[0]) / sizeof(matriz[0][0]) );

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nValores da matriz:\n");

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }

    return 0;
}
