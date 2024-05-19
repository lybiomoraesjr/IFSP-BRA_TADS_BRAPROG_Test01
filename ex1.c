#include <stdio.h>

int main(void)
{
	int i;

	for (i = 10; i <= 500; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
	}

	printf("\n");

	return 0;
}
