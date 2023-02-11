#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long int N;
        cin >> N;
        if (N > 8000) {
            cout << "Mais de 8000!" << endl;
        } else {
            cout << "Inseto!" << endl;
        }
    }
 
    return 0;
}
