#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;

	for (i = 1; i <= 5; i++)
	{
		for (j = 4; j >= i; j--)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}

		for (j = 2; j <= i; j++)
		{
			printf("*");
		}
		for (j = 4; j >= i; j--)
		{
			printf(" ");
		}

		printf("\n");
	}

	for (i = 1; i <= 4; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 4; j >= i; j--)
		{
			printf("*");
		}

		for (j = 3; j >= i; j--)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}