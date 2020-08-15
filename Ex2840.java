package uri;
import java.util.Scanner;

public class Ex2840 {
    public static void main(String[] args) {
        
        Scanner teclado = new Scanner(System.in);
        int raio = teclado.nextInt();
        int litros = teclado.nextInt();
        double volume;
        
        double pi = 3.1415;

        volume = ((4.0/3.0) * (pi * (raio * raio * raio)));
        
        int baloes;
                 
        baloes = (int) (litros / volume);
        
        System.out.println(baloes);
        
    }
}
