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
	// С����ϲ�����֣�����ϲ��0��1��
	// �����ڵõ���һ���������ÿλ�������0��1��
	// ���ĳһλ���������Ͱ������1�������ż������ô�Ͱ������0��
	int num = 0;
	printf("����һ������");
	scanf("%d", &num);

	int ret = num_change(num);
	printf("%d", ret);

	return 0;
}