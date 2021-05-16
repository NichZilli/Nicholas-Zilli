package arrays;

import java.util.ArrayList;

/**
 *
 * @author emerson e zilli
 */
public class Arrays {
    public static void main(String[] args) {
        
        ArrayList<String> array1 = new ArrayList<>();
        int [][] array2 = new int[3][3];
        
        array1.add("Ola");
        System.out.println("Tamanho array 1: " + array1.size());
        
        System.out.println("Tamanho array 2: " + array2.length);
        
        array1.remove("Ola");
        System.out.println("Tamanho array 1: " + array1.size());
    }
}
