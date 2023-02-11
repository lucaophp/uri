#include <stdio.h>
 
int main() {
 
    int nota;
    scanf("%d", &nota);
    if (nota <= 0)
        printf("E");
    else if(nota <= 35)
        printf("D");
    else if(nota <= 60)
        printf("C");
    else if(nota <=85)
        printf("B");
    else
        printf("A");
    printf("\n");
    
 
    return 0;
}
