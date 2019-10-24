#include <stdio.h>
#include <stdlib.h>
int X;
float m;
float d;
float h, r, s;
float p, pd;
int main(void)
{
	while (1)
	{
		printf("Enter employee's paycode (1 to 4 and -1 to end) : ");
		scanf_s("%d", &X);
		if (X == -1)
		{
			system("pause");
			return 0;
		}
		switch (X)
		{
		case 1:
			printf(" Manager\n");

			printf("   Enter manager's weekly salary : ");
			scanf_s("%f", &m);
			printf("   Salary is $%.2f\n", m);

			printf("\n");
			break;
		case 2:
			printf(" Hourly worker\n");

			printf("   Enter # of hours worked : ");
			scanf_s("%f", &h);
			printf("   Enter hourly rate of the worker ($00.00) : ");
			scanf_s("%f", &r);
			if (h <= 40)
			{
				printf("  Salary is $%.2f\n", h * r);
			}
			else
			{
				s = (40 * r) + (h - 40.00) * 1.5 * r;
				printf("   Salary is $%.2f\n", s);
			}

			printf("\n");
			break;
		case 3:
			printf(" Comission worker\n");

			printf("   Enter sales in dollars :");
			scanf_s("%f", &d);
			printf("   Salary is : $%.2f\n", 250 + (d * 0.057));

			printf("\n");
			break;
		case 4:
			printf(" Pieceworker\n");

			printf("   Enter sales pieces :");
			scanf_s("%f", &p);
			printf("   Enter dollers per piece :");
			scanf_s("%f", &pd);
			printf("   Salary is : $%.2f\n", p * pd);

			printf("\n");
			break;
		default:
			break;
		}
	}
}