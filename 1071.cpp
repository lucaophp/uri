#include <stdio.h>
#include <math.h>
 
int main() {
 
    int x, y, i;
    int soma = 0;
    scanf("%d %d", &x, &y);
    if (x >= y) {
    	for (i = x - 1; i > y; i--) {
	        soma += (abs(i % 2) == 1) ? i : 0;
	    }
	} else {
		for (i = y - 1; i > x; i--) {
	        soma += (abs(i % 2) == 1) ? i : 0;
	    }
	}
    
    printf("%d\n", soma);
 
    return 0;
}
