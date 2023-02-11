#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	double A, B, C;
	cin >> A >> B >> C;
	double trapezio = (C * (A + B))/2;
	printf("TRIANGULO: %.3f\n", (A * C) / 2);
	printf("CIRCULO: %.3f\n", 3.14159 * (C * C));
	printf("TRAPEZIO: %.3f\n", trapezio);
	printf("QUADRADO: %.3f\n", B * B);
	printf("RETANGULO: %.3f\n", A * B);
	return 0;
}
