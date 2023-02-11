#include <stdio.h>
#include <vector>
using namespace std;
typedef struct TDate{
	int hora, minuto;
}Date;
int main() {
	Date res = { 24, 0 };
	Date inicio;
	Date final;
	scanf("%d %d", &inicio.hora, &inicio.minuto);
	scanf("%d %d", &final.hora, &final.minuto);
	if (!(inicio.hora == final.hora && inicio.minuto == final.minuto)) {
		res.hora = final.hora - inicio.hora;
		res.minuto = final.minuto - inicio.minuto;
		if (res.minuto < 0) {
			res.minuto = 60 + res.minuto;
			res.hora -= 1;
		}
		if (res.hora >= 24 && res.hora > 0) {
			res.hora = 24 - res.hora;
			// res.hora -= 1;
		}
		if (res.hora < 0) {
			res.hora = 24 + res.hora;
		}
	}
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", res.hora, res.minuto);
	return 0;
	
}
