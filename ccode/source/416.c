#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	for (i = 9; i >= 0; i--)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			printf(" ");
	    }

		for (j = 10; j >= i ; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	for (i = 1; i <= 10; i++)
	{
		for (j = 9; j >= i; j--)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}