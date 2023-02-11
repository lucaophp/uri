#include <stdio.h>
#include <stdlib.h>
int main() {
	char O;
	double M[12][12];
	double soma = 0, count = 0;
	int i, j;
	scanf("%c", &O);
	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			scanf("%lf", &M[i][j]);
			if (j > i) {
				soma += M[i][j];
				count++;
			}
		}
	}
	printf("%.1lf\n", (O == 'M') ? (soma / count) : soma);
	return 0;
}
