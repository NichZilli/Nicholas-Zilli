package uri;
import java.util.Scanner;

public class Ex1020 {
    public static void main(String[] args) {
        
        Scanner teclado = new Scanner(System.in);
        int inteiro = teclado.nextInt();
        
        int ano = inteiro / 365;
        int resto = inteiro % 365;
        int mes = resto / 30;
        resto = resto % 30;
        int dia = resto / 1;
        
        System.out.println(ano + " ano (s)");
        System.out.println(mes + " mes (es)");
        System.out.println(dia + " dia (s)");
        
    }
}
