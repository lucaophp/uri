#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
int main() {
	int linhas;
	string msg = "";
	do {
		
		cin >> linhas;
		if (linhas <= 0) break;
		string frases[linhas];
		int maior = 0;
		for (int i = 0; i < linhas; i++) {
			string frase;
			getline(cin >> ws, frase);
			string buff = "";
			for (int si = 0; si < frase.length(); si++) {
				if (frase[si] == ' ') buff = " ";
				else {
					if (frase[si] > 'Z' || frase[si] < 'A') continue;
					frases[i] += buff;
					frases[i] += frase[si];
					buff = "";
				}
			}
			
			if (frases[maior].length() < frases[i].length()) maior = i;
		}
		int tamMaior = frases[maior].length();
		for (int i = 0; i < linhas; i++) {
			int tam = frases[i].length();
			int dif = tamMaior - tam;
			for (int d = 0; d < dif; d++) msg += " ";
			msg += frases[i] + "\n";
		}
		msg += "\n";
		
	} while(linhas > 0);
	
	cout << msg;
	return 0;
	
}
