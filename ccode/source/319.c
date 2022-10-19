#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c;

	printf("Enter loan principal(-1 to end):");
	scanf("%f", &a);
	printf("Enter interest rate:");
	scanf("%f", &b);
	printf("Enter term of the loan in days:");
	scanf("%f", &c);
	printf("The interest charge is $");
	printf("%.2f", a*b*c/365);

	return 0;
}