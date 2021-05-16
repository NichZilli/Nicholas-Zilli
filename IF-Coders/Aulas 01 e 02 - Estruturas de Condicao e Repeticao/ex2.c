#include <stdio.h>
#include <stdlib.h>

/*
 * Escreva um programa para ler o saldo inicial de uma conta bancária,
 * um valor decimal. A seguir ler um número indeterminado de pares de valores indicando
 * respectivamente o tipo da operação (codificado da seguinte forma: 1.Depósito
 * 2.Retirada e 3.Fim) e o valor que será movimentado. Quando for informado para o
 * tipo da operação o código 3, o programa deve ser encerrado e impresso o saldo final
 * da conta com as seguintes mensagens: “Sem saldo.” caso o saldo seja zero, “Conta
 * devedora.”, se o saldo for negativo ou “Conta preferencial.”, se o saldo seja positivo.
 * Caso seja fornecido umtipo incorreto de operação, ou seja, diferente de 1, 2 ou 3, o programa
 * deve exibir ao usuário a mensagem“Operacao invalida.” e solicitar novamente
 * a operação. Formate a saída dos números decimais usando 2 casas de precisão. (COLETÂNEA DE EXERCÍCIOS E NOTAS DE AULA EM LINGUAGEM DE PROGRAMAÇÃO C - Profº Dr David Buzatto)
 * Autores - Emerson Lima e Nicholas Zilli
 */

    int main() {

    float saldoinicial = 0;
    float saldofinal = 0;
    char opcao;

    printf( "Saldo inicial: " );
    scanf( "%f", &saldoinicial );

    printf( "Operacoes:\n" );
    printf( "    1) Deposito;\n" );
    printf( "    2) Saque;\n" );
    printf( "    3) Fim.\n" );


        do {

        printf( "\nOperacao desejada: " );
        scanf( " %c", &opcao );

            switch ( opcao ) {

            case '1':
                printf( "\nValor a depositar: " );
                scanf( "%f", &saldofinal );
                saldoinicial += saldofinal;
                break;

            case '2':
                printf( "\nValor a sacar: " );
                scanf( "%f", &saldofinal );
                saldoinicial -= saldofinal;
                break;

            case '3':
            break;


            default:
                printf( "\nOperacao invalida.\n" );
            break;

            }

       } while ( opcao != '3' );

                if ( saldoinicial > 0 ) {

                    printf( "\nSaldo final: R$ %.2f\n", saldoinicial );
                    printf( "\nConta preferencial.\n" );

                } else if ( saldoinicial < 0 ) {

                        saldoinicial = -saldoinicial;
                        printf( "\nSaldo final: -R$ %.2f\n", saldoinicial );
                        printf( "\nConta devedora.\n" );

                    } else {

                        printf( "\nSaldo final: R$ %.2f\n", saldoinicial );
                        printf( "\nSem saldo.\n" );

                        }

    return 0;

    }
