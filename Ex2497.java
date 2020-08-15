package uri;
import java.util.Scanner;

public class Ex2497 {
    public static void main(String[] args) {
        
        Scanner teclado = new Scanner(System.in);
        int ciclo;
        int experimento = 0;
        
        ciclo = teclado.nextInt();
        
        while(ciclo != -1) {
            
            ciclo = ciclo / 2;
            
            experimento++;
            
            System.out.println("Experiment " + experimento + ": " + ciclo + " full cycle(s)");
            
            ciclo = teclado.nextInt();            
        }
    }
}
