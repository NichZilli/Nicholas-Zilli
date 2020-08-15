#include <stdio.h>
#include <stdlib.h>

int potenciacao(int base, int expoente);

int main() {

    int exp;
    printf("Entre com um expoente: ");
    scanf("%d", &exp);

    int b = 2;

    int pot = potenciacao(b, exp);

    printf("\n2 elevado a %d = %d", exp, pot);

    return 0;

}

int potenciacao(int base, int expoente) {

    if(expoente == 0) {

        return 1;

    } else {

        return base * potenciacao(base, expoente - 1);

    }
}
