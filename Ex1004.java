package uri;
import java.util.Scanner;

//fonte: https://www.urionlinejudge.com.br/judge/en/problems/view/1004

public class Ex1004 {
    public static void main(String[] args) {
        
        Scanner teclado = new Scanner(System.in);
        int numeroUm = teclado.nextInt();
        int numeroDois = teclado.nextInt();
        int produto = numeroUm * numeroDois;
        System.out.println("PROD = "+ produto);
    }
    
}
