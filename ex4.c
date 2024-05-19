#include <stdio.h>

int main(void)
{
	int opcaoMenu;
	float raioCirculo, valorPi = 3.14, areaCalculada, ladoQuadrado, baseTriangulo, alturaTriangulo;
	char respostaRepeticao;

	while (1)
	{
		printf("Opções:\n");
		printf("1 - Calcular a área de um círculo\n");
		printf("2 - Calcular a área de um quadrado\n");
		printf("3 - Calcular a área de um triângulo\n");
		printf("Escolha a opção desejada: ");
		scanf("%d", &opcaoMenu);

		if (opcaoMenu == 1)
		{
			printf("Opção escolhida: calcular a área do círculo\n");
			printf("Digite o tamanho do raio: ");
			scanf("%f", &raioCirculo);
			areaCalculada = valorPi * raioCirculo * raioCirculo;
			printf("Area: %f \n", areaCalculada);
		}
		else if (opcaoMenu == 2)
		{
			printf("Opção escolhida: calcular a área do quadrado\n");
			printf("Digite o tamanho dos lados: ");
			scanf("%f", &ladoQuadrado);
			areaCalculada = ladoQuadrado * ladoQuadrado;
			printf("Area: %f \n", areaCalculada);
		}
		else if (opcaoMenu == 3)
		{
			printf("Opção escolhida: calcular a área do triângulo\n");
			printf("Digite o tamanho da base: ");
			scanf("%f", &baseTriangulo);
			printf("Digite o tamanho da altura: ");
			scanf("%f", &alturaTriangulo);
			areaCalculada = (baseTriangulo * alturaTriangulo) / 2;
			printf("Area: %f \n", areaCalculada);
		}
		else
		{
			printf("Valor inválido\n");
		}

		while (1)
		{
			printf("Deseja repetir o programa? (s para sim, n para não): ");
			scanf(" %c", &respostaRepeticao);

			if (respostaRepeticao == 's' || respostaRepeticao == 'S')
			{
				break;
			}
			else if (respostaRepeticao == 'n' || respostaRepeticao == 'N')
			{
				return 0;
			}
			else
			{
				printf("Resposta inválida. Digite 's' para sim ou 'n' para não.\n");
			}
		}
	}

	return 0;
}
