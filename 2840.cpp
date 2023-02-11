#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main() {
	double r, l, res;
	scanf("%lf %lf", &r, &l);
	double rr = 1.333333333 * (PI* pow(r,3));
	int g = l / rr;
	printf("%d\n", g);
	return 0;
}
