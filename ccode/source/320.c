#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c;

	printf("Enter # of hours worked(-1 to end):");
	scanf("%f", &a);
	printf("Enter hourly rate of the worker($00.00):");
	scanf("%f", &b);
	printf("Salary is $");

	if (a <= 40)
		printf("%.2f", a*b);
	if (a > 40)
		printf("%.2f", 40*b+(a-40)*b*1.5);

	return 0;
}