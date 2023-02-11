#include <stdio.h>
#include <string.h>

void main (void)
{

	unsigned short contador = 0, i, j, k;
	unsigned short numBilhtes, numPessoas;
	
	while (1)
	{		
		scanf("%hu %hu", &numBilhtes, &numPessoas);

		if (numBilhtes == 0 && numPessoas == 0)
			break;

		short codBilhete[numPessoas], codBilheteCpy[numPessoas];

		for (i = 0; i < numPessoas; i++)
			scanf("%hd", &codBilhete[i]);

		//Cria uma c�pia do vetor codBilhete para fazer modifica��es futuras;
		for (i = 0; i < numPessoas; i++)
			codBilheteCpy[i] = codBilhete[i];

		//Percorre o vetor codBilhete;
		for (i = 0; i < numPessoas; i++)
		{	
			
			for (j = 0; j < numPessoas; j++)
			{	
				//� preciso que a posi��o do codBilhete seja diferente do codBilheteCpy
				//Para n�o contar repeti��es;
				if (i != j)
					if (codBilhete[i] == codBilheteCpy[j])
					{
						contador++;
						codBilheteCpy[j] = 0;
						//Se pelo menos um valor igual for constatado
						//� preciso escrever 0 em todas as posi��es que t�m o mesmo valor
						//Para n�o contar na pr�xima itera��o;
						for (k = j; k < numPessoas; k++)
							if (codBilhete[i] == codBilheteCpy[k])
								codBilheteCpy[k] = 0;

						//Para o la�o for 'j' logo em seguida;
						break;

					}
				//Por fim, escreve 0 na posi��o que estava sendo avaliada com i;
				codBilheteCpy[i] = 0;
			
			}
		}

		printf("%hu\n", contador);
		contador = 0;
	}
}
