#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e;

	while (1)
	{
		printf("Enter account number(-1 to end) : ");
		scanf_s("%f", &a);
		if (an == -1)
		{
			system("pause");
			return 0;
		}

		printf("Enter beginning balance : ");
		scanf_s("%f", &b);
		printf("Enter total charge : ");
		scanf_s("%f", &c);
		printf("Enter total credits : ");
		scanf_s("%f", &d);
		printf("Enter credit limit : ");
		scanf_s("%f", &e);

		if ((b + c - d) > e)
		{
			printf("account :\t%.2f\n", a);
			printf("credit limit :\t%.2f\n", e);
			printf("balance :\t%.2f\n", b);
			printf("credit limit exceeded\n");

		}
		printf("\n");
	}
}