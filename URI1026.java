import java.util.*;
public class URI1026 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		long n,m;
		while (true) {
			try {
				n = s.nextLong();
				m = s.nextLong();
				System.out.println(n ^ m);
			} catch(Exception e) {
				break;
			}
		}
	}
}
