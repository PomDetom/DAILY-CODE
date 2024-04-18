#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define side 3

//��������
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

//��ʼ������
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
	//���Ͼ��󣬴����Ҵ��ϵ��µ�������
	//��������ʱ�临�Ӷ�С��O(N)
	int arr[side][side] = { 0 };
	initnum(arr);

	int num = 0;
	printf("������ҵ����֣�");
	scanf("%d", &num);
	int ret = findnum(arr, num);

	if (ret != 0)
	{
		printf("�ҵ��ˣ��ǵ�%d����", ret);
	}
	else
	{
		printf("û���ҵ���");
	}

	return 0;
}