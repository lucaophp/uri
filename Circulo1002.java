import java.io.IOException;
import java.util.Scanner;
import java.util.Locale;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Circulo1002 {
 
    public static void main(String[] args) throws IOException {
 
        Scanner leitor = new Scanner(System.in);
        double raio = leitor.nextDouble();
        double PI = 3.14159;
        double area = PI * (raio * raio);
        System.out.println(String.format("A=%.4f", area));
 
    }
 
}
