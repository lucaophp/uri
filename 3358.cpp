#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main() {
	int n, i, j, tam, c;
	char palavra[300], palavraResposta[300];
	int facil;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		facil = 0;
		c = 0;
		do {
			fgets(palavra, 300, stdin);
		} while (palavra[0] == '\n');
		
		for (j = 0; palavra[j] != '\n'; j++) {
			palavraResposta[j] = palavra[j];
			if ((palavra[j] >= 'A' && palavra[j] <= 'Z') || (palavra[j] >= 'a' && palavra[j] <= 'z')) {
				if (!((palavra[j] == 'A' || palavra[j] == 'E' 
					|| palavra[j] == 'I' || palavra[j] == 'O' 
					|| palavra[j] == 'U') || 
					(palavra[j] == 'a' || palavra[j] == 'e' 
					|| palavra[j] == 'i' || palavra[j] == 'o' || palavra[j] == 'u')))
				{
					c++;
					if (c >= 3) {
						facil++;
					}
					
				} else {
					c = 0;
				}
			}
		}
		palavraResposta[j] = '\0';
		if (facil == 0)
			printf("%s eh facil\n", palavraResposta);
		else
			printf("%s nao eh facil\n", palavraResposta);	
		// strrev(palavraResposta);
		
	}
	return 0;
	
}
