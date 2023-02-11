#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	bool test1 = b > c;
	bool test2 = d > a;
	bool test3 = (c + d) > (a + b);
	bool test4 = c >= 0 && d >= 0;
	bool test5 = (a % 2) == 0;
	if (test1 && test2 && test3 && test4 && test5) {
		cout << "Valores aceitos" << endl;
	} else {
		cout << "Valores nao aceitos" << endl;
	}
	return 0;
}
