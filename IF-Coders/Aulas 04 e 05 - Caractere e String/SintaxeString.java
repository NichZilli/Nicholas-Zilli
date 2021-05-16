package sintaxesExemplos;

import java.util.Scanner;

/**
 * Exemplo de sintaxe da String em Java
 * 
 * @author Emerson
 */
public class SintaxeString {
    public static void main(String[] args) {
        try( Scanner tec = new Scanner(System.in) ){
            String nome = tec.nextLine(); // Pegando o nome
            
            // Vendo se não existe o nome
            if( nome.isEmpty() ){
                System.err.println("Sem nome!");
                
            }else{
                // Pegando a primeira letra do nome
                System.out.println( "Primeira letra do seu nome eh: "
                + nome.charAt(0) );
                
                int comp = nome.compareTo("Marcos"); // Comparando os nomes
                
                // Exibindo os resultados de acordo com a comparação
                if(comp > 0){
                    System.out.println("Seu nome vem depois do meu.");
                }else if  (comp < 0){
                    System.out.println("Seu nome vem antes do meu.");
                }else{
                    System.out.println("Temos o mesmo nome!!!");
                }
                
            }
            
        } 
    }
}
