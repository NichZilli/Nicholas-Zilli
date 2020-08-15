package uri;
import java.util.Scanner;
import java.util.Locale;

//fonte: https://www.urionlinejudge.com.br/judge/en/problems/view/1008

public class Ex1008 {
    public static void main(String[] args) {
        
        Scanner teclado = new Scanner(System.in);
        int numero = teclado.nextInt();
        int horas = teclado.nextInt();
        teclado.useLocale(Locale.ENGLISH);
        float trabalho = teclado.nextFloat();
        float salario = horas * trabalho;
        System.out.println("NUMBER = "+ numero);
        System.out.printf("SALARY = U$ %.2f\n", salario);
        
    }
}
