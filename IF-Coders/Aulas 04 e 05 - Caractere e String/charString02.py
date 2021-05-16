"""
Escreva um programa que leia três strings.
A seguir imprimir as 3 strings em ordem alfabética.
COLETÂNEA DE EXERCÍCIOS E NOTAS DE AULA EM LINGUAGEM DE PROGRAMAÇÃO C
- Prof Dr David Buzatto (v1.0 - 2019).
"""
string1 = str(input("Digite a primeira string: "))
string2 = str(input("Digite a segunda string: "))
string3 = str(input("Digite a terceira string: "))
string1 = string1.lower()
string2 = string2.lower()
string3 = string3.lower()
print("\nEm ordem alfabética:\n")
if string1 < string2 < string3:
    print(string1, string2, string3)
elif string1 < string3 < string2:
    print(string1, string3, string2)
elif string2 < string1 < string3:
    print(string2, string1, string3)
elif string2 < string3 < string1:
    print(string2, string3, string1)
elif string3 < string1 < string2:
    print(string3, string1, string2)
else:
    print(string3, string2, string1)
