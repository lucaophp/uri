#include <stdio.h>
#include <stdlib.h>
int main() {
	char O;
	float M[12][12];
	float soma = 0, count = 0, elemento = 0;
	int i, j, c;
	scanf("%d %c", &c, &O);
	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			scanf("%f", &elemento);
			M[i][j] = elemento;
			if (j == c) {
				soma += elemento;
				count++;
			}
		}
	}
	printf("%.1f\n", (O == 'M') ? (soma / count) : soma);
	return 0;
}
