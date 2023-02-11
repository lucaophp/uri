#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char tweet[501];
	// gets(tweet);
	fgets(tweet, 501, stdin);
	printf("%s\n", strlen(tweet) <= 141 ? "TWEET" : "MUTE");
	return 0;
}
