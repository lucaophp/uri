#include <stdio.h>
 
int main() {
 
    int n, i, teste, matches = 0;
    scanf("%d", &n);
    for (i = 0; i < 5; i++) {
        scanf("%d", &teste);
        if (teste == n) matches++;
    }
    printf("%d\n", matches);
 
    return 0;
}
