#include <iostream>
#include <stdio.h>
#include <math.h>
 
using namespace std;
typedef struct SPonto {
	double x, y;
}Ponto;
double dist(Ponto p1, Ponto p2) {
	return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
 
int main() {
 
    Ponto p1, p2;
    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y;
    double distancia = dist(p1, p2);
    printf("%.4lf\n", distancia);
 
    return 0;
}
