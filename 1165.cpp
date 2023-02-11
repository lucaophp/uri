#include <stdio.h>
 
int main() {
 
    int n, num, i, j;
    int primo = 1;
    int feixo[] = {2,3,5,7}; 
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
    	primo = 1;
        scanf("%d", &num);
        for (j = 0; j < 4; j++) {
        	if (num % feixo[j] == 0 && num != feixo[j]) { 
                primo = 0;
                break;
            }
		}
        if (primo == 0) {
            printf("%d nao eh primo\n", num);
        } else {
            for (j = num - 1; j > 1; j--) 
                if (num % j == 0) { 
                    primo = 0;
                    break;
				}
            if (primo == 0) {
                printf("%d nao eh primo\n", num);
            } else {
                printf("%d eh primo\n", num);
            }
        }
    }
 
    return 0;
}
