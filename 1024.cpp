#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;
int main() {
	int n, i, j, tam;
	char palavra[300], palavraResposta[300];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		do {
			fgets(palavra, 300, stdin);
		} while (palavra[0] == '\n');
		
		for (j = 0; palavra[j] != '\n'; j++) {
			if ((palavra[j] >= 'A' && palavra[j] <= 'Z') || (palavra[j] >= 'a' && palavra[j] <= 'z')) {
				palavraResposta[j] = (char)((int)palavra[j] + 3);
			} else {
				palavraResposta[j] = palavra[j];
			}
		}
		palavraResposta[j] = '\0';
		// strrev(palavraResposta);
		tam = strlen(palavraResposta);
		string str = string(palavraResposta);
		reverse(str.begin(), str.end());
		/*
		int aux = tam - 1;
		char cAux;
		for (j = 0; j < tam; j++, aux--) {
			if (j >= aux) break;
			cAux = palavraResposta[aux];
			palavraResposta[aux] = palavraResposta[j];
			palavraResposta[j] = cAux;
			
		}
		*/
		strcpy(palavraResposta, str.c_str());
		for (j = trunc(tam /2); j < tam; j++) {
			palavraResposta[j] = (char)((int) palavraResposta[j] - 1);
		}
		puts(palavraResposta);
	}
	return 0;
	
}
