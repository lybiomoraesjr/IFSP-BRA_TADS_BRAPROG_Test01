#include <stdio.h>

int main(void)
{
	int x, y;

	do
	{
		printf("Entre com o valor de x: ");
		scanf("%d", &x);

		printf("Entre com o valor de y: ");
		scanf("%d", &y);

		if (x >= y)
		{
			printf("O valor de x deve ser menor que o valor de y. Tente novamente.\n");
		}
	} while (x >= y);

	printf("Fim\n");

	return 0;
}
