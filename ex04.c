#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mergeSortIterativo(int a[], int p, int r);
void intercalaSemSentinela(int a[], int p, int q, int r);

int main(){
    int tam;

    printf("Aula 04 - Exercicio 04 - MergeSort Iterativo sem Sentinela:\n");
    printf("\nEntre com o tamanho do Array de Inteiros: ");
    scanf("%d", &tam);

    int vet[tam];
    srand(time(NULL));
    printf("Ordenacao:\n");
    printf(" Array Desord.[] = ");
    for(int i = 0; i < tam; i++){
        vet[i] = rand() % 100;
        printf("%d ", vet[i]);
    }


    printf("\n");
    for(int i = 0; i < tam; i++){
        printf(" Array Ord. [] = ");
        for(int j = 0; j < tam; j++){
            mergeSortIterativo(vet, 0, tam);
            printf("%d ", vet[j]);
        }
        printf("\n");
    }

    return 0;
}

void mergeSortIterativo(int a[], int p, int r){
    int q;
        if(p < r){
            q = (p+r) / 2;
            intercalaSemSentinela(a, p, q, r);
        }
}

void intercalaSemSentinela(int a[], int p, int q, int r){
    int i, j, k;
    int b[r];

    for(i = p; i <= q; i++){
        b[i] = a[i];
    }
    for(j = q+1; j <= r; j++){
        b[r+q+1-j] = a[j];
    }
    i = p;
    j = r;
    for(k = p; k <= r; k++){
        if(b[i]<=b[j]){
            a[k] = b[i];
            i += 1;
        }else{
            a[k] = b[j];
            j -= 1;
        }
    }
}
