#include <iostream>
 
using namespace std;
 
int main() {
 
    int id, qtd;
    double valor;
    cin >> id >> qtd >> valor;
    printf("NUMBER = %d\n", id);
    printf("SALARY = U$ %.2f\n", (valor * qtd));
    return 0;
}
