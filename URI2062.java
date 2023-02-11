import java.io.IOException;
import java.util.Scanner;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI2062 {
 
    public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in);
		int N = leitor.nextInt();
		String[] palavras = new String[N];
		for (int i = 0; i < N; i++) {
			String palavra = leitor.next();
			if (palavra.length() == 3) {
				if (palavra.startsWith("OB") || palavra.startsWith("UR") && !palavra.endsWith("I")) {
					palavra = palavra.substring(0, 2) + "I";
				}
			}
			palavras[i] = palavra;
		}
		System.out.println(String.join(" ", palavras));
	}
 
}
