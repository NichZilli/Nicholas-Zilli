#include <stdio.h>
#include <stdlib.h>

int fibonacciIterativo(int n);
int temp;

int main() {

    int numero;
    printf("Entre com um numero: ");
    scanf("%d", &numero);

    int f;

    f = fibonacciIterativo(numero);

    printf("\nFibonacci de %d eh %d", numero, f);

    return 0;

}

int fibonacciIterativo(int n) {

    int i = 1;
    int fib = 1;
    int anterior = 0;

    while(i < n) {

        temp = fib;
        fib = fib + anterior;
        anterior = temp;
        i++;
    }

    return fib;

}
