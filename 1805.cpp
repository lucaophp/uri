#include <stdio.h>
#include <unistd.h>

int main ()
{

	unsigned long long numeroA, numeroB, resultado = 0;

	// O uso de variáveis que suportam o inteiro de entrada;
	scanf("%llu %llu", &numeroA, &numeroB);

	// Soma dos termos de uma PA;
	resultado = ((numeroA + numeroB) * (numeroB - numeroA + 1)) / 2;

	printf("%llu\n", resultado);
    return 0;
}
