'''
Partindo agora do conceito de arrays multidimensionais, dado um array de duas dimensões (3x3), do tipo inteiro,
peça para o usuário escrever os valores em cada posição da matriz. Depois imprima cada elemento da matriz.
Autor: Zilli
'''

array2 = [[0, 0, 0],
          [0, 0, 0],
          [0, 0, 0]]

for i in range(len(array2)):
    array2[0][i] = int(input("Digite os valores da primeira linha da matriz: "))

for i in range(len(array2)):
    array2[1][i] = int(input("Digite os valores da segunda linha da matriz: "))

for i in range(len(array2)):
    array2[2][i] = int(input("Digite os valores da terceira linha da matriz: "))

print(array2[0])
print(array2[1])
print(array2[2])