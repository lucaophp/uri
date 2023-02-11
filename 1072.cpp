#include <stdio.h>
int main() {
	int N, i, val;
	int in = 0;
	int out = 0;
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		
		scanf("%d", &val);
		in = in + ((val >= 10 && val <= 20) ? 1 : 0);
		out = out + ((val >= 10 && val <= 20) ? 0 : 1);
	}
	printf("%d in\n%d out\n", in, out);
	return 0;
}
