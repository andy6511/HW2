#include <stdio.h>
#include <stdlib.h>
float d;

int main(void)
{
	while (1)
	{
		printf("Enter sales  in dollars (-1 to end) :");
		scanf_s("%f", &d);
		if (d == -1)
		{
			system("pause");
			return 0;
		}
		printf("Salary is : $%.2f\n", 200 + (d * 0.09));
		printf("\n");
	}
}