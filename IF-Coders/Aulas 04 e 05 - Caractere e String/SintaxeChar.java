package character;

import static java.lang.Character.isLetter;

/**
 *
 * @author Emerson
 */
public class SintaxeChar {
    public static void main(String[] args) {
        char a = 'a';
        
        char[] arrayChar = {'i', 'f', 'c'};
        
        for(Character c : arrayChar){
            System.out.print( Character.toUpperCase(c) + " " );
        }
        
        System.out.println();
        System.out.println( isLetter( a )? "Eh uma letra" : "Nao eh letra" ); 
    }
}
