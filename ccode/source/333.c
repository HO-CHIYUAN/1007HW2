#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, i, j;

	printf("Enter length:");
	scanf("%d", &j);
	printf("Enter width:");
	scanf("%d", &i);

	for (a = 1; a <= i; a++)
	{
		for (b = 1; b <= j; b++)
		{
			if (a == 1 || a == i || b == 1 || b == j)
				printf("+");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}