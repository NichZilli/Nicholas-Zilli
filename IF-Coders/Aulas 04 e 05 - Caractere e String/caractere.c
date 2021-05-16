#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    char d = 'd';

    char n = '1';

    char a[12] = {'H','E','L','L','O',' ','W','O','R','L','D'};

    printf(a);
    printf("\n");

    if (isdigit(n)) {

        printf("\nEh um digito.\n");

    }

    if (isalpha(d)) {

        printf("\nEh uma letra.\n");

    } else {

        printf("\nNao eh digito nem letra.\n");

    }

    return 0;

}
