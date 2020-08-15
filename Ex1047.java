package uri;
import java.util.Scanner;

public class Ex1047 {
    public static void main(String[] args) {
        
        Scanner teclado = new Scanner(System.in);
        int horaInicial = teclado.nextInt();
        int minutoInicial = teclado.nextInt();
        int horaFinal = teclado.nextInt();
        int minutoFinal = teclado.nextInt();
        
        int totalHoras = 0;
        int totalMinutos = 0;
        
        if(horaFinal <= 24 && horaInicial <= 24 && horaFinal >= 0 && horaInicial >= 0 && minutoInicial >= 0 && minutoFinal >= 0 && minutoInicial <= 60 && minutoFinal <= 60) {
            
            if(minutoFinal > minutoInicial) {
                
                totalMinutos = minutoFinal - minutoInicial;
                
            } else if(minutoFinal < minutoInicial) {
                
                totalMinutos = minutoFinal - minutoInicial + 60;
                horaFinal -= 1;
            }
            
            if(horaFinal >= horaInicial) {
                
                totalHoras = horaFinal - horaInicial;
                
            } else if(horaFinal < horaInicial) {
                
                totalHoras = horaFinal - horaInicial + 24;
            }
            
            if(totalHoras == 0 && totalMinutos == 0) {
                
                totalHoras += 24;
            }
        }
        
        System.out.println("O JOGO DUROU " + totalHoras + " HORA(S) E " + totalMinutos + " MINUTO(S)");     
    }
}
