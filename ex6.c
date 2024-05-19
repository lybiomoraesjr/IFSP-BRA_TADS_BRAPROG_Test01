#include <stdio.h>

int main(void)
{
	int tam = 3;
	int vetor[tam], i;

	for (i = 0; i < tam; i++)
	{
		printf("Entre com um valor: ");
		scanf("%d", &vetor[i]);

		printf("O valor %d é negativo? ", vetor[i]);
		if (vetor[i] < 0)
		{
			printf("verdadeiro\n");
		}
		else
		{
			printf("falso\n");
		}

		printf("O valor %d é igual a zero? ", vetor[i]);
		if (vetor[i] == 0)
		{
			printf("verdadeiro\n");
		}
		else
		{
			printf("falso\n");
		}

		printf("O valor %d é divisível por 5? ", vetor[i]);
		if (vetor[i] % 5 == 0)
		{
			printf("verdadeiro\n");
		}
		else
		{
			printf("falso\n");
		}

		printf("O valor %d é superior a 100? ", vetor[i]);
		if (vetor[i] > 100)
		{
			printf("verdadeiro\n");
		}
		else
		{
			printf("falso\n");
		}

		printf("O valor %d é inferior a -100? ", vetor[i]);
		if (vetor[i] < -100)
		{
			printf("verdadeiro\n");
		}
		else
		{
			printf("falso\n");
		}

		printf("\n");
	}

	return 0;
}
