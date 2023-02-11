#include <iostream>
 
using namespace std;
 
int main() {
 
    double val;
    string msg;
    cin >> val;
    if (val > 100 || val < 0) msg = "Fora de intervalo";
    else if(val <=25) msg = "Intervalo [0,25]";
    else if(val <= 50) msg = "Intervalo (25,50]";
    else if(val <=75) msg = "Intervalo (50,75]";
    else msg = "Intervalo (75,100]";
    cout << msg << endl;
 
    return 0;
}
