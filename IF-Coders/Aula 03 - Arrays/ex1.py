'''
Partindo dos conceitos de array de uma dimensão, peça ao usuário o tamanho do array e dois valores do tipo “float”,
atribua a soma desses dois valores em todas as posições do array. Após isso, imprimir o array com todos os valores.
Autor: Nicholas Zilli
'''

tamanho = int(input("Digite o tamanho do array: "))
array1 = [1.0]*tamanho

numero1 = float(input("Digite o primeiro valor decimal: "))
numero2 = float(input("Digite o segundo valor decimal: "))

for i in range(len(array1)):
    array1[i] = numero1 + numero2

print(array1)
