import java.io.IOException;
import java.util.Scanner;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI1962 {
 
    public static void main(String[] args) throws IOException {
 
        Scanner leitor = new Scanner(System.in);
    	int N = leitor.nextInt();
    	int T, anos;
    	for (int i = 0; i < N; i++) {
    		T = leitor.nextInt();
    		if (T >= 2015) {
    			anos = T - 2014;
    			System.out.println(anos + " A.C.");
    		} else {
    			anos = 2015 - T;
    			System.out.println(anos + " D.C.");
    		}
    	}
 
    }
 
}
