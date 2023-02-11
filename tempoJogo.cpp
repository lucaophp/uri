#include <iostream>
 
using namespace std;
 
int main() {
    int inicial, final, hora;
    cin >> inicial >> final;
    if (inicial == final) hora = 24;
    else if (inicial < final) hora = final - inicial;
    else hora = 24 - (inicial - final);
    
    cout << "O JOGO DUROU " << hora << " HORA(S)" << endl;
 
    return 0;
}
