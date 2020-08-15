#include <stdio.h>
#include <stdlib.h>

float harmonico(float n);

int main() {

    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    float h = harmonico(numero);

    printf("\nO enesimo numero harmonico de %.2f eh %f", numero, h);

    printf("\n");

    return 0;
}

float harmonico(float n) {

    if(n <= 1) {

        return 1;

    } else {

        return harmonico(n - 1) + (1 / n);
    }
}
