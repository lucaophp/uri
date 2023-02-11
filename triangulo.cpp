 #include <iostream>
 using namespace std;
 int main() {
 	double a, b, c;
 	cin >> a >> b >>c;
 	if ((b - c) < a && (b+c) > a) {
 		printf("Perimetro = %.1f\n", (a + b + c));
	} else {
		double trapezio = (c * (a + b))/2;
		printf("Area = %.1f\n", trapezio);
	}
 	
	return 0;
 	
 }
