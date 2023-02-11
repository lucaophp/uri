#include <stdio.h>
 
int main() {
 
    int c, n, i, j, count;
    double media, soma;
    scanf("%d", &c);
    for (i = 0; i < c; i++) {
        scanf("%d", &n);
        int notas[n];
        soma = 0.0;
        count = 0;
        for (j = 0; j < n; j++) {
            scanf("%d", &notas[j]);
            soma += notas[j];
        }
        media = soma / (float)n;
        for (j = 0; j < n; j++) {
            if (notas[j] > media) {
                count++;
            }
        }
        printf("%.3f%%\n", (((float) count / (float) n) * 100));
        
    }
 
    return 0;
}
