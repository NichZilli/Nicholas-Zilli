package uri;
import java.util.Scanner;
import java.util.Locale;

//fonte: https://www.urionlinejudge.com.br/judge/en/problems/view/1021

public class Ex1021 {
    public static void main(String[] args) {
        
        Scanner teclado = new Scanner(System.in);
        teclado.useLocale(Locale.ENGLISH);
        double numero = teclado.nextDouble();
        int dinheiro;
        double resto;
        
        System.out.println("NOTAS:");
        
        dinheiro = (int) (numero / 100);
        System.out.println(dinheiro + " nota(s) de R$ 100.00");
        resto = numero % 100;
        dinheiro = (int) (resto / 50);
        System.out.println(dinheiro + " nota(s) de R$ 50.00");
        resto %= 50;
        dinheiro = (int) (resto / 20);
        System.out.println(dinheiro + " nota(s) de R$ 20.00");
        resto %= 20;
        dinheiro = (int) (resto / 10);
        System.out.println(dinheiro + " nota(s) de R$ 10.00");
        resto %= 10;
        dinheiro = (int) (resto / 5);
        System.out.println(dinheiro + " nota(s) de R$ 5.00");
        resto %= 5;
        dinheiro = (int) (resto / 2);
        System.out.println(dinheiro + " nota(s) de R$ 2.00");
        resto %= 2;
        resto = resto * 100.0;
        System.out.println("MOEDAS:");
        dinheiro = (int) (resto / 100);
        System.out.println(dinheiro + " moeda(s) de R$ 1.00");
        resto %= 100;
        dinheiro = (int) (resto / 50);
        System.out.println(dinheiro + " moeda(s) de R$ 0.50");
        resto %= 50;
        dinheiro = (int) (resto / 25);
        System.out.println(dinheiro + " moeda(s) de R$ 0.25");
        resto %= 25;
        dinheiro = (int) (resto / 10);
        System.out.println(dinheiro + " moeda(s) de R$ 0.10");
        resto %= 10;
        dinheiro = (int) (resto / 5);
        System.out.println(dinheiro + " moeda(s) de R$ 0.05");
        resto %= 5;
        dinheiro = (int) (resto / 1);
        System.out.println(dinheiro + " moeda(s) de R$ 0.01");  
        
    }
}
