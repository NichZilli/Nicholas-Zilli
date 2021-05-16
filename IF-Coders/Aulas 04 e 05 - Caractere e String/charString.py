"""
Escreva um programa para ler uma sentença e apresentar:
• O primeiro caractere da sentença;
• O último caractere da sentença;
• O número de caracteres existente na sentença.
COLETÂNEA DE EXERCÍCIOS E NOTAS DE AULA EM LINGUAGEM DE PROGRAMAÇÃO C
- Prof Dr David Buzatto (v1.0 - 2019).
"""
string = str(input("Digite uma string: "))
print("Primeiro caractere:", string[0])
print("Último caractere:", string[len(string)-1])
print("Tamanho da sentença:", len(string))