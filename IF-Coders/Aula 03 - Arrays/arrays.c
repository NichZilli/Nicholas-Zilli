#include <stdio.h>
#include <stdlib.h>

//Autores: Emerson e Zilli

int main() {

    int array1[] = {5, 2, 3, 4, 5};
    int array2[][3] = { {2, 3, 4}, {1, 2, 3} };
    int array3[5];

    int linhas2 = (int) ( sizeof( array2 ) / sizeof( array2[0] ) );
    int colunas2 = (int) ( sizeof( array2[0] ) / sizeof(array2[0][0] ) );
    int tamanho = (int) (sizeof(array1) / sizeof(array1[0]) );

    printf("\nTamanho do array: %d\n", tamanho);
    printf("\nNumero de linhas: %d\n", linhas2);
    printf("\nNumero de colunas: %d\n", colunas2);
    printf("\nTamanho do array 3: %d\n", (int) ( sizeof( array3 ) / sizeof( array3[0] )) );

    return 0;

}
