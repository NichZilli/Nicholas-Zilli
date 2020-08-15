#include <stdio.h>
#include <stdlib.h>

int comb(int n, int k);

int main() {

    int grupo;
    printf("Entre com o valor de grupos distintos (k): ");
    scanf("%d", &grupo);

    printf("\n");

    int pessoas;
    printf("Entre com o valor de pessoas (n): ");
    scanf("%d", &pessoas);

    int combinacoes = comb(pessoas, grupo);

    printf("\nA quantidade de combinacoes C(n, k) = C(%d, %d) = %d", pessoas, grupo, combinacoes);

    printf("\n");

    return 0;

}

int comb(int n, int k) {

    if(k == 1) {

        return n;

    } else if(k == n) {

        return 1;

    } else if( (k > 1) && (k < n) ) {

        return comb(n - 1, k - 1) + comb(n - 1, k);

    }

}
