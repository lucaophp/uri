 #include <iostream>
 using namespace std;
 int main() {
 	int a, b, c;
 	cin >> a >> b >>c;
 	// A
 	if (a > b && a > c) {
 		if (b > c) {
 			cout << b << endl;	
		} else {
			cout << c << endl;
		}
		return 0;
	}
	// B
 	if (b > a && b > c) {
 		if (a > c) {
 			cout << a << endl;	
		} else {
			cout << c << endl;
		}
		return 0;
	}
	// C
 	if (c > a && c > b) {
 		if (a > b) {
 			cout << a << endl;	
		} else {
			cout << b << endl;
		}
		return 0;
	}
	return 0;
 	
 }
