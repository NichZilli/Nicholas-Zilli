def fatorial(n):
    temp = 1
    for i in range(1, n + 1):
        temp *= i
    return temp


numero = int(input("Digite um numero: "))

fatorial(numero)

print("O fatorial de " + str(numero) + " eh " + str(fatorial(numero)))
