#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define side 3

//查找数字
int findnum(const int (*arr)[side], const int num)
{
	int i = 0;
	int j = 0;

	while (num > *(*(arr + i) + (side - 1)))
	{
		i++;
		if (i == side)
		{
			return 0;
		}
	}
	while (*(*(arr + i) + j) != num)
	{
		j++;
		if (j == side)
		{
			return 0;
		}
	}
	return i * side + j + 1;
}

//初始化数组
void initnum(int (*arr)[side])
{
	int i = 0;
	int num = 1;

	for (i = 0; i < side; i++)
	{
		int j = 0;
		for (j = 0; j < side; j++)
		{
			*(*(arr + i) + j) = num;
			num++;
		}
	}
}

int main()
{
	//杨氏矩阵，从左到右从上到下递增矩阵
	//查找数字时间复杂度小于O(N)
	int arr[side][side] = { 0 };
	initnum(arr);

	int num = 0;
	printf("输入查找的数字：");
	scanf("%d", &num);
	int ret = findnum(arr, num);

	if (ret != 0)
	{
		printf("找到了！是第%d个数", ret);
	}
	else
	{
		printf("没有找到。");
	}

	return 0;
}