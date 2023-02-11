#include <iostream>
#include <stdio.h>
#include <math.h>
 
using namespace std;
typedef struct SProduto {
	double preco;
	int id, qtd;
}Produto;

 
int main() {
 
    Produto p1, p2;
    cin >> p1.id >> p1.qtd >> p1.preco;
    cin >> p2.id >> p2.qtd >> p2.preco;
    double soma = (p1.qtd * p1.preco) + (p2.qtd * p2.preco);
    printf("VALOR A PAGAR: R$ %.2lf\n", soma);
 
    return 0;
}
