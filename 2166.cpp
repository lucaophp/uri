#include <stdio.h>
int main() {
	int n, i;
	double x = 0.0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		x += 2.0;
		x = (1.0/x);
	}
	x += 1.0;
	printf("%.10lf\n", x);
}
