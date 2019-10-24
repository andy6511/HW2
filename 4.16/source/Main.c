#include <stdio.h>
#include <stdlib.h>
int i, j;
int main(void)
{
	printf("(A)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(B)\n");
	for (i = 10; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(C)\n");
	for (i = 10; i >= 1; i--)
	{
		for (j = 9; j >= i; j--)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(D)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 9; j >= i; j--)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}