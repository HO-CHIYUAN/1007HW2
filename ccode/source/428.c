#include <stdio.h>
#include <stdlib.h>

int main()
{
	double b, c, d, e, f;
	int a, g, i;

	printf("輸入經理人員週薪:$");
	scanf("%d", &a);
	printf("輸入時薪工時薪:$");
	scanf("%lf", &b);
	printf("輸入時薪工工作時數:$");
	scanf("%lf", &c);
	printf("輸入抽佣金工銷售金額:$");
	scanf("%lf", &d);
	printf("輸入零工生產件數:$");
	scanf("%lf", &e);
	printf("輸入零工可得金額/件:$");
	scanf("%lf", &f);

	for (i = 1; i <= 4; i++)
	{
		printf("\n輸入員工薪資代碼:\n");
		printf("PS:經理人員(1),時薪工(2),抽佣金工(3),零工(4)\n");
		scanf("%d", &g);

		switch (g)
		{
		case 1:
			printf("\n薪資=$");
			printf("%d", a);
			printf("\n");
			break;
		case 2:
			if (c >= 40)
			{
				printf("\n薪資=$");
				printf("%.1lf", (c - 40)*b*1.5 + 40 * b);
				printf("\n");
			}
			else
			{
				printf("\n薪資=$");
				printf("%.1lf", c * b);
				printf("\n");
			}
			break;
		case 3:
			printf("\n薪資=$");
			printf("%.3lf", d*1.057 + 250);
			printf("\n");
			break;
		case 4:
			printf("\n薪資=$");
			printf("%.3lf", e*f);
			printf("\n");
			break;
		}
	}

	return 0;
}