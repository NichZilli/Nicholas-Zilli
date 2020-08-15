package uri;
import java.util.Scanner;

//fonte: https://www.urionlinejudge.com.br/judge/en/problems/view/1007

public class Ex1007 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int a = teclado.nextInt();
        int b = teclado.nextInt();
        int c = teclado.nextInt();
        int d = teclado.nextInt();
        int diferenca = ( (a * b) - (c * d) );
        System.out.println("DIFERENCA = "+ diferenca);
    }
}
