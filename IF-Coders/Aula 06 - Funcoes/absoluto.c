#include <stdio.h>
#include <stdlib.h>

int absoluto(int n) {

    if(n < 0) {

        n = n * -1;

    } else {

       n = n;

    }

    return n;

}

int main() {

    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    int a = absoluto(numero);

    printf("\nValor absoluto de %d: %d\n", numero, a);

    return 0;

}
