#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	float b, c, d, e;

	printf("Enter account number(-1 to end):");
	scanf("%d", &a);
	printf("Enter beginnig balance:");
	scanf("%f", &b);
	printf("Enter total charges:");
	scanf("%f", &c);
	printf("Enter total credits:");
	scanf("%f", &d);
	printf("Enter credit limit:");
	scanf("%f", &e);
	printf("\n");

	if ((b + c - d) > e)
	{
		printf("Account:");
		printf("%d", a);
		printf("\n");
		printf("Credit limit:");
		printf("%.2f", e);
		printf("\n");
		printf("balance:");
		printf("%.2f", b + d);
		printf("\n");
		printf("Credit Limit Exceed.");
	}
	return 0;
}