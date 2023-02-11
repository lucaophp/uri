#include <stdio.h>
#include <string.h>
int main() {
	char letra[2];
	char letra_;
	char i;
	scanf("%s", letra);
	// strupr(letra);
	letra_ = letra[0];
	int pos = 0;
	bool encontrou = false;
	for (i = 'A'; i <= letra_ && i <= 'Z'; i++) {
		pos++;
		encontrou = letra_ == i;
	}
	
	int pos2 = 0;
	for (i = 'a'; i <= letra_ && i <= 'z' && !encontrou; i++) {
		pos2++;
	}
	
	printf("%d\n", ((encontrou) ? pos : pos2));
	return 0;
} 
