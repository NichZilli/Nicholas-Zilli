package estruturascondicionaisederepeticao;

import java.util.Scanner;

/**Escreva um programa que peça para o usuário fornecer dois números
 * inteiros. Se o primeiro número for menor ou igual ao segundo, o programa deve exibir
 * todos os números no intervalo entre os números digitados em ordem crescente. Caso o
 * primeiro número seja maior que o segundo, o programa deve exibir todos os números
 * no intervalo entre os números digitados emordem decrescente. 
 *
 * COLETÂNEA DE EXERCÍCIOS E NOTAS DE AULA EM LINGUAGEM DE PROGRAMAÇÃO C - Profº Dr David Buzatto
 *
 * @since 30/11/2020
 * @see classe
 * @author Emerson Lima, Nicholas Zilli
 */
public class Ex1 {
    
    public static void main(String[] args) {
        
        Scanner teclado = new Scanner(System.in);
        int n;
        int m;
        
        System.out.print("N1: ");
        n = teclado.nextInt();
        System.out.print("N2: ");
        m = teclado.nextInt();
        
        if(n <= m) {
            
            for(int i = n; i <= m; i++) {
                
                System.out.print(" " + i + " ");
            }
            
        } else {
            
            for(int i = n; i >= m; i--) {
                System.out.print(" " + i + " ");
            }
        }
        
        System.out.println();
    }
    
}
