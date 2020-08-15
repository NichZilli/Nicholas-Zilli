package uri;
import java.util.Scanner;
import java.util.Locale;

//fonte: https://www.urionlinejudge.com.br/judge/en/problems/view/1006

public class Ex1006 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        teclado.useLocale(Locale.ENGLISH);
        float a = teclado.nextFloat();
        float b = teclado.nextFloat();
        float c = teclado.nextFloat();
        float media = ( ( (a * 2) + (b * 3) + (c * 5) ) / 10 );
        System.out.printf("MEDIA = %.1f\n", media);
    }
    
}
