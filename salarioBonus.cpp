#include <iostream>
 
using namespace std;
 
int main() {
 
    string nome;
    double fixo, vendas;
    cin >> nome >> fixo >> vendas;
    double total = fixo + (vendas * 0.15);
    printf("TOTAL = R$ %.2f\n", total);
    return 0;
}
