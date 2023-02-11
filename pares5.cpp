#include <stdio.h>
 
int main() {
 
    int pares = 0;
    int i;
    int teste;
    for (i = 0; i < 5; i++) {
        scanf("%d", &teste);
        if (teste % 2 == 0) pares++;
    }
    printf("%d valores pares\n", pares);
 
    return 0;
}
