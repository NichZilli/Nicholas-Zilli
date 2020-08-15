package uri;
import java.util.Scanner;

//fonte: https://www.urionlinejudge.com.br/judge/en/problems/view/1003

public class Ex1003 {
    public static void main(String[] args) {
        
        Scanner teclado = new Scanner(System.in);
        int numeroUm = teclado.nextInt();
        int numeroDois = teclado.nextInt();
        int soma = numeroUm + numeroDois;
        System.out.println("SOMA = "+ soma);
    }
    
}
