package uri;
import java.util.Scanner;
import java.util.Locale;

//fonte: https://www.urionlinejudge.com.br/judge/en/problems/view/1002

public class Ex1002 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        teclado.useLocale(Locale.ENGLISH);
        double raio = teclado.nextDouble();
        double pi = 3.14159;
        double area = pi * (raio * raio);
        System.out.println("A=" + String.format("%.4f", area));
        
    }
}
