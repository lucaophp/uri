#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool verificaParenteses (char* str) {
	int i = 0, a = 0;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == '(') {
			a++;
		} else if (str[i] == ')') {
			a--;
		}
		if (a < 0) return false;
	}
	return a == 0;
}
int main() {
	char ex[1100];
	while(scanf(" %s", ex) != EOF) {
		if (verificaParenteses(ex)) {
			puts("correct");
		} else {
			puts("incorrect");
		}
	}
	return 0;
}
