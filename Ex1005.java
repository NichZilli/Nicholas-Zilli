package uri;
import java.util.Scanner;
import java.util.Locale;

//fonte: https://www.urionlinejudge.com.br/judge/en/problems/view/1005


public class Ex1005 {
    public static void main(String[] args) {
       Scanner teclado = new Scanner(System.in);
       teclado.useLocale(Locale.ENGLISH);
       double um = teclado.nextDouble();
       double dois = teclado.nextDouble();
       double media = ( ( (um * 3.5) + (dois * 7.5) ) / 11 );
       System.out.printf("MEDIA = %.5f\n", media);
    }
}
