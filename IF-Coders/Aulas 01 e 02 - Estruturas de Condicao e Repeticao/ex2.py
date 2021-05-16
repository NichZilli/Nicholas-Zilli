'''
 * Escreva um programa para ler o saldo inicial de uma conta bancária,
 * um valor decimal. A seguir ler um número indeterminado de pares de valores indicando
 * respectivamente o tipo da operação (codificado da seguinte forma: 1.Depósito
 * 2.Retirada e 3.Fim) e o valor que será movimentado. Quando for informado para o
 * tipo da operação o código 3, o programa deve ser encerrado e impresso o saldo final
 * da conta com as seguintes mensagens: “Sem saldo.” caso o saldo seja zero, “Conta
 * devedora.”, se o saldo for negativo ou “Conta preferencial.”, se o saldo seja positivo.
 * Caso seja fornecido umtipo incorreto de operação, ou seja, diferente de 1, 2 ou 3, o programa
 * deve exibir ao usuário a mensagem “Operacao invalida.” e solicitar novamente
 * a operação. Formate a saída dos números decimais usando 2 casas de precisão. (COLETÂNEA DE EXERCÍCIOS E NOTAS DE AULA EM LINGUAGEM DE PROGRAMAÇÃO C - Profº Dr David Buzatto)
 * Autor - Nicholas Zilli
'''

saldoinicial = float(input("Saldo inicial: "))
opcao = ""

print("Operacoes:\n")
print("\t 1) Deposito;\n")
print("\t 2) Saque;\n")
print("\t 3) Fim;\n")


def switch(saldoinicial):
    opcao = str(input("\nOperacao Desejada: "))
    while opcao != "3":
        if opcao == "1":
            saldofinal = float(input("Valor a depositar: "))
            saldoinicial += saldofinal
            opcao = str(input("\nOperacao Desejada: "))
        elif opcao == "2":
            saldofinal = float(input("Valor a sacar: "))
            saldoinicial -= saldofinal
            opcao = str(input("\nOperacao Desejada: "))
        elif opcao == "3":
            quit()
        else:
            print("Operacao Invalida")
            opcao = str(input("\nOperacao Desejada: "))
    return saldoinicial


saldoinicial = switch(saldoinicial)

if saldoinicial > 0:
    print("\nSaldo final: R$ " + str(saldoinicial))
    print("\nConta preferencial.\n")
elif saldoinicial < 0:
    print("\nSaldo final: -R$ " + str(saldoinicial))
    print("\nConta devedora.\n")
else:
    print("\nSaldo final: R$ " + str(saldoinicial))
    print("\nSem saldo.\n")
