#include <stdio.h>
#include <iostream>

using namespace std;
int main() {
	int diam;
	int altura, largura, profundidade;
	cin >> diam;
	cin >> altura >> largura >> profundidade;
	if (altura >= diam && largura >= diam && profundidade >= diam) {
		cout << "S" << endl;
	} else {
		cout << "N" << endl;
	}
	return 0;
	
}
