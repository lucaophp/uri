#include <iostream>
using namespace std;
int main() {
	int d;
	
	cin >> d;
	for (int i = 1 ; i <= d; i++) {
		if (d % i == 0) cout << i << endl;
	}
	return 0;
}
