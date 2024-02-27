#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;
	printf("输入一个数字:");
	scanf("%d", &num);
	int i = 0;
	int j = 0;

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < num - 1; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * num - 3 - 2 * i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}