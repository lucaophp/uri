import java.io.IOException;
import java.util.Scanner;
import java.util.Locale;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Linha1181 {
    public static void main(String[] args) throws IOException {
		final Locale localeAmericano = new Locale("en", "US");
		
		Locale.setDefault(localeAmericano);
		Scanner leitor = new Scanner(System.in);
		double[][] M = new double[12][12];
		int l = leitor.nextInt();
		char O = leitor.next().toUpperCase().charAt(0);
		double soma = 0, count = 0;
		double resultado = 0;
		for (int i = 0; i < M.length; i++) {
			for (int j = 0; j < M[i].length; j++) {
				M[i][j] = leitor.nextDouble();
				if (i == l) {
					soma += M[i][j];
					count++;
				}
			}
		}
		resultado = (O == 'M') ? (soma / count) : soma;
		System.out.println(String.format("%.1f", resultado));
    }
 
}

