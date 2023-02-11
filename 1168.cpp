#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() {
 
    int leds[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    char texto[100];
    int soma = 0, i = 0, n = 0;
    scanf("%d", &n);
    while (n > 0) {
    	soma = i = 0;
    	do {
    		//fflush(stdin);
    		//fgets(texto, 99, stdin);
    		scanf("%s", texto);
		} while(strlen(texto) == 0);
    	
	    while(texto[i] != '\n' && texto[i] != '\0') {
	        soma += leds[(int)texto[i] - (int)'0'];
	        i++;
	    }
	    printf("%d leds\n", soma);
	    n--;
	}
    
 
    return 0;
}
