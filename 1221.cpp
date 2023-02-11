#include <stdio.h>
#include <math.h>
 
int main() {
 
    int n, num, i, j, limit;
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
        if (primo == 0 || num <= 1) {
            printf("Not Prime\n");
        } else {
        	limit = (int)sqrt(num);
            for (j = 3; j < limit; j++) 
                if (num % j == 0) { 
                    primo = 0;
                    break;
				}
            if (primo == 0) {
                printf("Not Prime\n");
            } else {
                printf("Prime\n");
            }
        }
    }
 
    return 0;
}
