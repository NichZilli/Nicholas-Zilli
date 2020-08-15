#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int main() {

    int numero;
    printf("Entre com um numero: ");
    scanf("%d", &numero);

    int fib;

    fib = fibonacci(numero);

    printf("\nFibonacci de %d: %d", numero, fib);

}

int fibonacci(int n) {

    if(n <= 2) {

        return 1;

    } else {

        return fibonacci(n - 2) + fibonacci(n - 1);

    }
}
