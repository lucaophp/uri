import java.io.IOException;
import java.util.Scanner;
import java.util.Locale;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Triangulo1045 {
    public static void main(String[] args) throws IOException {
		final Locale localeAmericano = new Locale("en", "US");
		
		Locale.setDefault(localeAmericano);
		Scanner leitor = new Scanner(System.in);
        double a, b, c;
		a = leitor.nextDouble();
		b = leitor.nextDouble();
		c = leitor.nextDouble();
		if (a >= (b+c) || b >= (a+c) || c >= (a+b)) {
			System.out.printf("NAO FORMA TRIANGULO\n");
			return;
		}
		if(a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b)) {
			System.out.printf("TRIANGULO RETANGULO\n");
		} else if(a*a > (b*b + c*c) || b*b > (a*a + c*c) || c*c > (a*a + b*b)) {
			System.out.printf("TRIANGULO OBTUSANGULO\n");
		} else if(a*a < (b*b + c*c) || b*b < (a*a + c*c) || c*c < (a*a + b*b)) {
			System.out.printf("TRIANGULO ACUTANGULO\n");
		}
		if (a == b && a == c) {
			System.out.printf("TRIANGULO EQUILATERO\n");
		}
		if ((a == b && b !=c) || (b ==c && c!= a)|| (a == c && c != b)) {
			System.out.printf("TRIANGULO ISOSCELES\n");
		}
        
        
 
    }
 
}


