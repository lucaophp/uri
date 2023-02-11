#include <stdio.h>
#include <math.h>
int main() {
	int n;
	scanf("%d", &n);
	
	double fib = (pow((1 + sqrt(5)) / 2.0, n) - pow((1 - sqrt(5)) / 2.0, n)) / sqrt(5);
	printf("%.1lf\n", fib);
	return 0;
}
