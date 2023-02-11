#include <stdio.h>
int main() {
	int x, i, val, soma;
	do {
		soma = 0;
		scanf("%d", &val);
		if (val == 0) continue;
		if (val % 2 != 0) x = val + 1;
		else x = val;
		for (i = 0; i < 5; i++) {
			soma += (x + (i * 2));
		}
		printf("%d\n", soma);
	} while(val != 0);
}
