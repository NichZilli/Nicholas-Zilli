#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int OrdC(int a[], int tam);
int Busca(int a[], int in, int tam, int buscar);

int main(){
    int tam;
    int busca;

    printf("Aula 04 - Exercicio 05 - Busca Binaria:\n");
    printf("\nEntre com o tamanho do Array de Inteiros: ");
    scanf("%d", &tam);

    int vet[tam];

    srand(time(NULL));
    printf("\nArray Gerado Ordenado = ");
    for(int i = 0; i < tam; i++){
        vet[i] = rand() % 100;
    }

    OrdC(vet, tam);
    for(int i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }

    printf("\nEntre com o valor Inteiro a ser procurado: ");
    scanf("%d", &busca);

    printf("\n");
    Busca(vet, 0, tam, busca);

    return 0;
}

int OrdC(int a[], int tam){
    int temp, i, j;

    for(i = 0; i < tam; i++){
        for(j = i; j > 0; j--){
            if(a[j] < a[j-1]){
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
        }
    }
}

int Busca(int a[], int in, int fim, int buscar){
    int cont = 0, q;

    //sem recursividade
    /*for(int i = 0; i < tam; i++){
        if(a[i] == buscar){
            printf("O Valor %d foi encontrado na posicao %d do Array!", buscar, i);
            break;
        }else{
            cont++;
        }
    }
    if(cont == tam){
        printf("O Valor %d nao foi encontrado no Array!", buscar);
    }*/

    if(in > 0){
        for(int i = in; i < fim; i++){
            if(a[i] == buscar){
               printf("O Valor %d foi encontrado na posicao %d do Array!", buscar, i);
               break;
            }else{
                cont++;
            }
        }
        if(cont == 4){
            printf("O Valor %d nao foi encontrado no Array!", buscar);
        }

    }else if(in < fim){
        q = fim/2;
        for(int i = in; i < q; i++){
            if(a[i] == buscar){
                printf("O Valor %d foi encontrado na posicao %d do Array!", buscar, i);
                break;
            }else{
                cont++;
            }
        }
        Busca(a, q+1, fim, buscar);
    }
}
