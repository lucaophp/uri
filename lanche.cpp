#include <iostream>
#include <stdio.h>
 
using namespace std;
typedef struct TProduto{
    int codigo;
    float preco;
    string especificacao;
} Produto;
 
int main() {
 
    int cod, qtd;
    float total;
    float precos[] = { 4, 4.5, 5.0, 2.0, 1.5 }; 
    cin >> cod >> qtd;
    total = precos[cod - 1] * qtd;
    printf("Total: R$ %.2f\n", total);
 
    return 0;
}
