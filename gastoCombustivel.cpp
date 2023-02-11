#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
 
    double tempo, velocidade;
    double combustivel;
    cin >> tempo >> velocidade;
    combustivel = (velocidade * (tempo)) / 12;
    printf("%.3f\n", combustivel);
 
    return 0;
}
