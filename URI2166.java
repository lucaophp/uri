import java.util.Scanner;
public class URI2166 {
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in);
		int n;
		double x = 0.0;
		n = leitor.nextInt();
		for(int i = 0; i < n; i++) {
			x += 2.0;
			x =(1.0/x);
		}
		x+= 1.0;
		System.out.printf("%.10f\n", x);
	}
}
