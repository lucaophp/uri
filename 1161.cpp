#include <stdio.h>
int main() {
	int i;
	long long int n1, n2, t;
	long long int f1 = 1, f2 = 1;
	while(scanf("%lld %lld", &n1, &n2) != EOF) {
		f1 = 1, f2 = 1;
		if (n1 < n2) {
			t = n2;
			n2 = n1;
			n1 = t;
		}
		for (i = n1; i >= 1; i--) {
			f1 *= i;
			if (i <= n2) {
				f2 *= i;
			}
		}
		printf("%lld\n", f1 + f2);
	}
	
	return 0;
}
