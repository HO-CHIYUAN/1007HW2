#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c;

	printf("請輸入員工基本薪資(-1 to end):");
	scanf("%f", &a);
	printf("請輸入銷售金額:");
	scanf("%f", &b);
	printf("請輸入紅利加成%數:");
	scanf("%f", &c);
	printf("總薪資為:$");
	printf("%.2f", a+(b*(c/100)));

	return 0;
}