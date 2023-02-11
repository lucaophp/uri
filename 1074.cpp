#include <stdio.h>
 
int main() {
    int n, i, num;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num == 0) {
            printf("NULL\n");
        } else if(num > 0) {
            printf("%s\n", (num % 2 == 0) ? "EVEN POSITIVE" : "ODD POSITIVE");
        } else {
            printf("%s\n", (num % 2 == 0) ? "EVEN NEGATIVE" : "ODD NEGATIVE");
        }
    }
    
 
    return 0;
}
