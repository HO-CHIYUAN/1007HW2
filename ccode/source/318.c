#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c;

	printf("�п�J���u���~��(-1 to end):");
	scanf("%f", &a);
	printf("�п�J�P����B:");
	scanf("%f", &b);
	printf("�п�J���Q�[��%��:");
	scanf("%f", &c);
	printf("�`�~�ꬰ:$");
	printf("%.2f", a+(b*(c/100)));

	return 0;
}