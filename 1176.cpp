#include <stdio.h>
#define uint64 unsigned long long int
uint64 fib[61];
int last = 2;

uint64 fibo(int n) {
	int i = 0;
	if (n < last) return fib[n];
	for (i = last; i <= n; i++) {
		fib[i] = fib[i-2] + fib[i-1];
		last = i;
	}
	return fib[n];
}
int main() {
	
	int n, t, i, j;
	scanf("%d", &t);
	fib[0] = 0;
	fib[1] = 1;
	
	for (i = 0; i < t; i++) {
		scanf("%d", &n);
		fibo(n);
		printf("Fib(%d) = %llu\n", n, fib[n]);	
	}
	return 0;
}
