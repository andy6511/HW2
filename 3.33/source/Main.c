#include <stdio.h>
#include <stdlib.h>
int lgh, bdh;
int i, j;

int main(void)
{
	printf("Enter length and breadth : ");
	scanf_s("%d %d", &lgh, &bdh);
	for (i = 1; i <= lgh; i++)
	{
		for (j = 1; j <= bdh; j++)
		{
			if ((i == 1) || (i == lgh))
			{
				printf("+");
			}
			else if ((j == 1) || (j == bdh))
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}