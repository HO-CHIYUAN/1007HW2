#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, i, j;
	
	printf("a\tb\tc\n");

	for (a = 2; a <= 500; a++)
	{
		for (b = 2; b <= 500; b++)
		{
			for (c = 2; c <= 500; c++)
			{
				if (((a * a + b * b) == c * c) && a<b)
				{
					printf("%d\t", a);
					printf("%d\t", b);
					printf("%d\n", c);
				}
			}
		}
	}

	return 0;
}