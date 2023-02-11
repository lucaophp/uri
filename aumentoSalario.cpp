#include <iostream>
 
using namespace std;
 
int main() {
 
    double salario, novoSalario, acrescimo;
    int p;
    cin >> salario;
    if (salario <= 400) {
        p = 15;
    } else if (salario <= 800) {
        p = 12;
    } else if (salario <= 1200) {
        p = 10;
    } else if (salario <= 2000) {
        p = 7;
    } else {
        p = 4;
    }
    acrescimo = salario * ((double) p / 100);
    novoSalario = acrescimo + salario;
    printf("Novo salario: %.2f\n", novoSalario);
    printf("Reajuste ganho: %.2f\n", acrescimo);
    printf("Em percentual: %d %%\n", p);
 
    return 0;
}
