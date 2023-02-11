#include <iostream>
#include <stdio.h>
#define ANO_ATUAL 2015
using namespace std;
int main() {
	int N, tempo, dif;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tempo;
		dif = ANO_ATUAL - tempo;
		printf("%d %s\n", (dif <= 0) ? (((-1) * dif) + 1) : dif, (dif <= 0) ? "A.C." : "D.C.");
	}
	return 0;
}


