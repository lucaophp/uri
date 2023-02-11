#include <iostream>
 
using namespace std;
 
int main() {
 
    int seq[3];
    int maior = 0, vice = 0, menor = 0;
    for (int i = 0; i < 3; i++) {
        cin >> seq[i];
        if (seq[maior] < seq[i]) {
            vice = maior;
            maior = i;
            
        } else if (seq[menor] > seq[i]) {
            vice = menor;
            menor = i;
            
        } else {
        	vice = i;
		}
    }
    cout << seq[menor] << endl;
    cout << seq[vice] << endl;
    cout << seq[maior] << endl;
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << seq[i] << endl;
    }
 
    return 0;
}
