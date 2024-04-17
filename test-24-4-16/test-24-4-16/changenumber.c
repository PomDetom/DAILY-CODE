#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num_change(int num)
{
	int ret = 0;
	int n = 1;

	while (num / n)
	{
		ret += (num / n) % 2 * n;
		n *= 10;
	}
	return ret;
}

int main()
{
	// 小乐乐喜欢数字，尤其喜欢0和1。
	// 他现在得到了一个数，想把每位的数变成0或1。
	// 如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。
	int num = 0;
	printf("输入一个数：");
	scanf("%d", &num);

	int ret = num_change(num);
	printf("%d", ret);

	return 0;
}