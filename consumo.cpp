#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	int X;
	double Y;
	double consumo;
	cin >> X >> Y;
	consumo = X / Y;
	printf("%.3lf km/l\n", consumo);
	return 0;
}
