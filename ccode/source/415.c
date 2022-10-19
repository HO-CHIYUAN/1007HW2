#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a = 5000, b = 0.1;
	int i, j;

	printf("%4s %10s %9s\n","Year","Total","Rate");

	for (j = 1; j <= 15; j++)
	{
		float c = a * pow(1.0 + b, j);
		printf("%4u %10.3f", j, c);
		printf("%10.3f\n", b);
		b = b + 0.005;
	}

	return 0;
}