#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	for (i = 0; i < 9; i += 2)
	{
		for (j = 3; j >= i / 2; j--) printf(" ");
		for (j = i / 2; j >= 0; j--) printf("*");
		for (j = (i / 2) - 1; j >= 0; j--) printf("*");
		printf("\n");
	}
	for (i = 7; i > 0; i -= 2)
	{
		for (j = 3; j >= i / 2; j--) printf(" ");
		for (j = i / 2; j >= 0; j--) printf("*");
		for (j = (i / 2) - 1; j >= 0; j--) printf("*");
		printf("\n");
	}
}
