#include <iostream>
using namespace std;
int main() {
	int dias;
	cin >> dias;
	struct SData{
		int ano, dias, meses;
	} data;
	data.ano = dias / 365;
	data.meses = (dias - (data.ano * 365)) / 30;
	dias -= 365 * data.ano;
	dias -= 30 * data.meses;
	data.dias = dias;
	cout << data.ano << " ano(s)" << endl;
	cout << data.meses << " mes(es)" << endl;
	cout << data.dias << " dia(s)" << endl;
	//cout << data.ano << " " << data.meses << " " << data.dias;
	return 0;
}
