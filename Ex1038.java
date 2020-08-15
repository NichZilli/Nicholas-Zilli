package uri;
import java.util.Scanner;

public class Ex1038 {
    public static void main(String[] args) {
        
        Scanner teclado = new Scanner(System.in);
        int x = teclado.nextInt();
        int y = teclado.nextInt();
        double total = 0.00;
        
        switch(x) {
            
            case 1:
                total += 4.00;
                break;
            case 2:
                total += 4.50;
                break;
            case 3:
                total += 5.00;
                break;
            case 4:
                total += 2.00;
                break;
            case 5:
                total += 1.50;
                break;
            default:
                System.out.println();
                return;   
        }
        
        total *= (double) y;
        
        System.out.printf("Total: R$ %.2f\n", total);
        
    }
}
