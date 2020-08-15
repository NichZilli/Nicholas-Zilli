#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b);

int main() {

    int a;
    int b;
    int s;

    printf("Entre com o valor de a: ");
    scanf("%d", &a);

    printf("\nEntre com o valor de b: ");
    scanf("%d", &b);

    s = mdc(a, b);

    printf("\nmdc(%d, %d) = %d", a, b, s);

    printf("\n");

    return 0;
}

int mdc(int a, int b) {

    if(b == 0) {

        return a;

    } else if(a >= b && b > 0) {

        int r = mdc(b, a % b);

        return r;

    }
}
