#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    int respostas[n];
    for (int i = 0; i < n; i++) {
        cin >> respostas[i];
        cout << "resposta " << i + 1 << ": " << respostas[i] << endl;
    }
 
    return 0;
}
