#include <stdio.h>
 

int main() {
 
    int pressaoDesejada, pressaoLida;
    scanf("%d %d", &pressaoDesejada, &pressaoLida);
    printf("%d\n", pressaoDesejada - pressaoLida);
 
    return 0;
}
