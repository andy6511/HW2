#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float time, money, sum;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end) : ");
		scanf_s("%f", &time);
		if (time == -1)
		{
			system("pause");
			return 0;
		}
		printf("Enter hourly rate of the worker ($00.00) : ");
		scanf_s("%f", &money);

		if (time <= 40)
		{
			printf("Salary is $%.2f\n", time * money);
		}
		else
		{
			sum = (40 * money) + (time - 40.00) * 1.5 * money;
			printf("Salary is $%.2f\n", sum);
		}
		printf("\n");
	}
}