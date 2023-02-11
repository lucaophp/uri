#include <stdio.h>
int main() {
	int i = 0;
	int n = 0;
	int maior = -9999;
	int pos = 0;
	for (i = 0; i < 100; i++) {
		scanf("%d", &n);
		if (maior < n) {
			maior = n;
			pos = i + 1;
		}
	}
	printf("%d\n", maior);
	printf("%d\n", pos);
	return 0;
}
