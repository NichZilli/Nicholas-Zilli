#include <stdio.h>
#include <stdlib.h>

int ForcaBruta(int vet[], int tam);
int Melhorado(int vet[], int tam);

int main(){
    int tam;

    printf("---Projeto 01 - 3SUM---\n");
    printf("\nDefinir o tamanho do Array: ");
    scanf("%d", &tam);

    int vet[tam];
    for(int i = 0; i < tam; i++){
        printf("Entre com o %d elemento do Array: ", i+1);
        scanf("%d", &vet[i]);
    }

    printf("\nArray Infor.  []  = ");
    for(int i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }

    printf("\n\n---3SUM - Forca Bruta:---\n\n");
    ForcaBruta(vet, tam);

    printf("\n---3SUM - Melhorado:---\n\n");
    Melhorado(vet, tam);

    return 0;
}

int ForcaBruta(int vet[], int tam){
    int p, sum1, sum2, cont = 0, foi = 1;
    int opera = 0;

    for(int cP = 0; cP < tam; cP++){
        p = vet[cP];
        opera++;
        for(int i = cP+1; i < tam; i++){
            opera++;
            for(int j = i+1; j < tam; j++){
                sum1 = p + vet[i];
                sum2 = sum1 + vet[j];
                opera++;
                if(sum2 == 0){
                    opera++;
                    printf("%d Tripla Encontrada: [%d, %d, %d]\n", foi, p, vet[i], vet[j]);
                    foi++;
                    cont++;
                }
            }
        }
    }
    printf("Total Triplas Encontradas pela Forca Bruta: %d\n", cont);
    printf("Quantidade de Operacoes - 3SUM - Forca Bruta: %d\n", opera);
}

int Melhorado(int vet[], int tam){
    int temp, opera = 0;

    for(int i = 0; i < tam; i++){
        for(int j = i; j > 0; j--){
            if(vet[j] < vet[j-1]){
                temp = vet[j-1];
                vet[j-1] = vet[j];
                vet[j] = temp;
            }
        }
    }

    printf("Array Ord.  []  = ");
    for(int i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }

    printf("\n");

    int sum1, cont = 0, foi = 1;
    int cp1 = 0, cp2 = 1, cpJ = 2, x = 0;

    do{
        for(int i = x+1; i < tam; i++){
            opera++;
            for(int j = i+1; j < tam; j++){
                opera++;
                sum1 = vet[x] + vet[i];
                if(vet[j] == -sum1){
                    opera++;
                    printf("%d Tripla Encontrada: [%d, %d, %d]\n", foi, vet[x], vet[i], vet[j]);
                    cont++;
                    foi++;
                }
            }
        }
        cp1++;
        cp2++;
        cpJ++;
        x++;

    }while(x < tam);
    printf("Total Triplas Encontradas pelo Melhorado: %d\n", cont);
    printf("Quantidade de operacoes - 3SUM - Melhorado: %d\n", opera);
}
