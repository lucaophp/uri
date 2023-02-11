#include <stdio.h>
int main() {
	int N, n = 0;
	int i, caso, j;
	while(scanf("%d", &N) != EOF) {
		caso++;
		n = 0;
		for (i = 0; i <= N; i++) {
			if (i == 0) n++;
			else n += i;
		}
		if(N == 0) printf("Caso %d: %d numero\n", caso, n);
        else printf("Caso %d: %d numeros\n", caso, n);
		for (i = 0; i <= N; i++) {
			if (i == 0) printf("%s", N > 0 ? "0 " : "0");
			else {
				for (j = 0; j < i; j++) {
					printf("%d", i);
					if (!(j == (i - 1) && i == N)) {
						printf(" ");
					}
				}
			}
		}
		printf("\n");
		printf("\n");
	}
	return 0;
}
