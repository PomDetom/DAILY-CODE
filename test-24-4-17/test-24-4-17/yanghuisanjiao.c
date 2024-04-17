#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define side 10

int main()
{
	//Ñî»ÔÈý½Ç
	//....1
	//...1.1
	//..1.2.1
	//.1.3.3.1
	//1.4.6.4.1
	//
	// 1
	// 11
	// 121
	// 1331
	// 14641
	int arr[side][side] = { 0 };
	int i = 0;

	for (i = 0; i < side; i++)
	{
		int j = 0;

		for (j = 0; j < side; j++)
		{
			if (j == 0 || i == j)
			{
				arr[i][j] = 1;
			}
			if (j > 0 && j < i)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
		for (j = 1; j < side - i; j++)
		{
			printf("  ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}