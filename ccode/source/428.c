#include <stdio.h>
#include <stdlib.h>

int main()
{
	double b, c, d, e, f;
	int a, g, i;

	printf("��J�g�z�H���g�~:$");
	scanf("%d", &a);
	printf("��J���~�u���~:$");
	scanf("%lf", &b);
	printf("��J���~�u�u�@�ɼ�:$");
	scanf("%lf", &c);
	printf("��J������u�P����B:$");
	scanf("%lf", &d);
	printf("��J�s�u�Ͳ����:$");
	scanf("%lf", &e);
	printf("��J�s�u�i�o���B/��:$");
	scanf("%lf", &f);

	for (i = 1; i <= 4; i++)
	{
		printf("\n��J���u�~��N�X:\n");
		printf("PS:�g�z�H��(1),���~�u(2),������u(3),�s�u(4)\n");
		scanf("%d", &g);

		switch (g)
		{
		case 1:
			printf("\n�~��=$");
			printf("%d", a);
			printf("\n");
			break;
		case 2:
			if (c >= 40)
			{
				printf("\n�~��=$");
				printf("%.1lf", (c - 40)*b*1.5 + 40 * b);
				printf("\n");
			}
			else
			{
				printf("\n�~��=$");
				printf("%.1lf", c * b);
				printf("\n");
			}
			break;
		case 3:
			printf("\n�~��=$");
			printf("%.3lf", d*1.057 + 250);
			printf("\n");
			break;
		case 4:
			printf("\n�~��=$");
			printf("%.3lf", e*f);
			printf("\n");
			break;
		}
	}

	return 0;
}