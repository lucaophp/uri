#include <stdio.h>
 
int main() {
 
    int p = 0;
    int i;
    double teste;
    for (i = 0; i < 6; i++) {
        scanf("%lf", &teste);
        if (teste > 0) p++;
    }
    printf("%d valores positivos\n", p);
 
    return 0;
}
