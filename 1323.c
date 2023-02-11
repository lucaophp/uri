#include <stdio.h>
#include <stdbool.h>

int main ()
{

	unsigned short quadrado;
	unsigned resultado;

	while (true)
	{
		scanf("%hu", &quadrado);

		if (quadrado == 0)
			break;

		resultado = 0;
		while (quadrado)
		{
			resultado += (quadrado * quadrado);
			quadrado--;
		}

		printf("%u\n", resultado);

	}
	return 0;
}
