import java.io.IOException;
import java.util.Scanner;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI1068 {
 
    public static void main(String[] args) throws IOException {
 
        Scanner s = new Scanner(System.in);
        while(s.hasNext()) {
            String ex = s.nextLine();
            int p = 0;
            for (int i = 0; (i < ex.length() && p >= 0); i++) {
                if (ex.charAt(i) == '(') {
                    p++;
                } else if (ex.charAt(i) == ')') {
                    p--;
                }
            }
            System.out.println(p == 0 ? "correct" : "incorrect");
        }
        
 
    }
 
}
