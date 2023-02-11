#include <stdio.h>
int main() {
	float notas[4];
	float notaExame;
	float media;
	float mediaFinal;
	float soma = 0;
	int i;
	int pesos[] = {2, 3, 4, 1};
	for (i = 0; i < 4; i++) {
		scanf("%f", &notas[i]);
		soma += notas[i] * pesos[i];
	}
	media = soma / 10;
	printf("Media: %.1f\n", media);
	if (media < 5) {
		printf("Aluno reprovado.\n");
		return 0;
	}
	if (media >= 7) {
		printf("Aluno aprovado.\n");
		return 0;
	}
	printf("Aluno em exame.\n");
	scanf("%f", &notaExame);
	printf("Nota do exame: %.1f\n", notaExame);
	mediaFinal = (media + notaExame) / 2.0;
	
	if (mediaFinal >= 5) {
		printf("Aluno aprovado.\n");
	} else {
		printf("Aluno reprovado.\n");
	}
	printf("Media final: %.1f\n", mediaFinal);
	return 0;
}
