#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;

	for (i = 1; i < 10; i++)
	{
		int j = 0;
		int m = 0;
		int n = 0;

		for (j = 1; j < 10 - i; j++)
		{
			printf(" ");
		}
		for (m = 1; m <= i; m++)
		{
			printf("%d", m);
		}
		for (n = m - 2; n > 0; n--)
		{
			printf("%d", n);
		}
		printf("\n");
	}

	return 0;
}