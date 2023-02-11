#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n, i, maior = 0, soma = 0;
	int* votos;
	int segundoTurno = 0;
	scanf("%d", &n);
	votos = (int *) malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		scanf("%d", &votos[i]);
		if (votos[maior] < votos[i]) maior = i;
		soma += votos[i];
	}
	float p45 = round(soma * 0.45);
	float p40 = round(soma * 0.40);
	float p10 = round(soma * 0.10);
	
	if (p45 > votos[maior] && p40 > votos[maior]) {
		segundoTurno++;
	} else {
		for (i = 0; i < n; i++) {
			if (maior == i) continue;
			if ((votos[maior] - votos[i]) < p10) {
				segundoTurno++;
			}
		}
	}
	printf("%s\n", (p45 > votos[maior] && segundoTurno > 0) ? "2": "1");
	free(votos);
	return 0;
}
