package uri;
import java.util.Scanner;

//fonte: https://www.urionlinejudge.com.br/judge/en/problems/view/1001

public class Ex1001 {
    public static void main(String[] args) {
        
        Scanner teclado = new Scanner(System.in);
        int numeroUm = teclado.nextInt();
        int numeroDois = teclado.nextInt();
        int x = numeroUm + numeroDois;
        System.out.println("X = " + x);
    }
}
