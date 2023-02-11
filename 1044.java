import java.io.IOException;
import java.util.Scanner;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner leitor = new Scanner(System.in);
    	int n = leitor.nextInt();
    	int m = leitor.nextInt();
    	System.out.println((m % n == 0 || n % m == 0) ? "Sao Multiplos" : "Nao sao Multiplos");
 
    }
 
}
