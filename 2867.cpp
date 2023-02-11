#include <stdio.h>
#include <math.h>
int main () {
	unsigned N, i, j, base, pot;
	
	float dig = 0;
	scanf("%u", &N);
	for (i = 0; i < N; i++) {
		dig = 0;
		scanf("%u %u", &base, &pot);
		dig = (floor(log10(pow(base, pot)))) + 1;
		printf("%.f\n", dig);
		
	}
	return 0;
}
