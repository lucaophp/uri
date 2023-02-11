#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
int main() {
	double valor;
	double valorCorrigido;
	scanf("%lf", &valor);
	valorCorrigido = valor;
	int notas[] = { 100, 50, 20, 10, 5, 2 };
	int moedas[] = { 100, 50, 25, 10, 5, 1 };
	cout << "NOTAS:" << endl;
	// notas
	for (int i = 0; i < 6; i++) {
		int qtd = valorCorrigido / notas[i];
		valorCorrigido -= (notas[i]) * qtd;
		printf("%d nota(s) de R$ %.2lf\n", qtd, (double)notas[i]);
		
	}
	cout << "MOEDAS:" << endl;
	int moeda = (int) (valorCorrigido * 100);
	// moedas
	for (int i = 0; i < 6; i++) {
		int qtd = moeda / moedas[i];
		moeda -= qtd * moedas[i];
		printf("%d moeda(s) de R$ %.2lf\n", qtd, (double)(moedas[i]) / 100);
		
	}
	
	return 0;
	
	
}
