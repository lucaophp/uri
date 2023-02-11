#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int c = i + 1;
        cout << c << " ";
        c = c * c;
        cout << c << " ";
        c = (i + 1) * c;
        cout << c << endl;
        
        c = i + 1;
        cout << c << " ";
        c = (c * c);
        cout << c + 1 << " ";
        c = ((i + 1) * c);
        cout << c + 1 << endl;
    }
 
    return 0;
}
