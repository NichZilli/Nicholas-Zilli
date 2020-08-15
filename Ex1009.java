package uri;
import java.util.Scanner;
import java.util.Locale;

//fonte: https://www.urionlinejudge.com.br/judge/en/problems/view/1009

public class Ex1009 {
    public static void main(String[] args) {
        
        Scanner teclado = new Scanner(System.in);
        String nome = teclado.nextLine();
        teclado.useLocale(Locale.ENGLISH);
        double salario = teclado.nextDouble();
        double vendas = teclado.nextDouble();
        double salarioFinal = salario + (vendas * 0.15);
        System.out.printf("TOTAL = R$ %.2f\n", salarioFinal);
    }
}
