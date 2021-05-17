programa
{
	
	funcao inicio()
	{
		inteiro contador = 0
		cadeia nomes[3]
		cadeia cidades[3]
		cadeia telefones[3]
		
		faca{
			escreva("Digite seu nome: ")
			leia(nomes[contador])
			escreva("Digite sua cidade: ")
			leia(cidades[contador])
			escreva("Digite seu telefone: ")
			leia(telefones[contador])
			contador++
		}enquanto(contador<=2)

		escreva("\n")
		contador = 0
		
		faca{
			escreva("Nome: " + nomes[contador] + " Cidade: " + cidades[contador] + " Telefone: " + telefones[contador] + "\n")
			contador++
		}enquanto(contador<=2)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 60; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */