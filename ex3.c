#include <stdio.h>

int main(void)
{
	int tipo_combustivel, alcool = 0, gasolina = 0, diesel = 0;

	do
	{
		printf("Menu:\n");
		printf("1. Álcool\n");
		printf("2. Gasolina\n");
		printf("3. Diesel\n");
		printf("4. Fim\n");
		printf("Qual tipo de combustível abastecido?\n");
		scanf("%d", &tipo_combustivel);

		switch (tipo_combustivel)
		{
		case 1:
			alcool++;
			break;
		case 2:
			gasolina++;
			break;
		case 3:
			diesel++;
			break;
		case 4:
			printf("Fim da leitura\n");
			break;
		default:
			printf("Número inválido\n");
			break;
		}
	} while (tipo_combustivel != 4);

	printf("Total de vendas por tipo de combustível:\n");
	printf("1 - Álcool: %d\n", alcool);
	printf("2 - Gasolina: %d\n", gasolina);
	printf("3 - Diesel: %d\n", diesel);

	return 0;
}
