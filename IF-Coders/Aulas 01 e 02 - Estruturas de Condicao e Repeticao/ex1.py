'''
Escreva um programa que peça para o usuário fornecer dois números
inteiros. Se o primeiro número for menor ou igual ao segundo, o programa deve exibir
todos os números no intervalo entre os números digitados em ordem crescente. Caso o
primeiro número seja maior que o segundo, o programa deve exibir todos os números
no intervalo entre os números digitados emordem decrescente. (COLETÂNEA DE EXERCÍCIOS E NOTAS DE AULA EM LINGUAGEM DE PROGRAMAÇÃO C - Profº Dr David Buzatto)
Autor - Nicholas Zilli
'''

n1 = int(input("N1: "))
n2 = int(input("N2: "))

if n1 <= n2:
    i = n1
    for i in range(i, n2+1):
        print(i, end=" ")
else:
    i = n2
    for i in range(n1, i-1, -1):
        print(i, end=" ")
