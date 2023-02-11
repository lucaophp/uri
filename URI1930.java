import java.util.Scanner;
public class URI1930 {
	public static void main(String[] args) {
		int t, s = 1;
		Scanner leitor = new Scanner(System.in);
		for (int i = 0; i < 4; i++) {
			t = leitor.nextInt();
			s += (t - 1);
		}
		System.out.println(s);
	}
}
