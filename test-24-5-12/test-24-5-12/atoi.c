#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int my_atoi(const char* str)
{
	int count_num = 0;
	int count_str = 0;

	while (*(str + count_str) == '+' || *(str + count_str) == '-' || *(str + count_str) == ' ')
	{
		count_str++;
	}
	while (*(str + count_str + count_num) >= '0' && *(str + count_str + count_num) <= '9')
	{
		count_num++;
	}
	if (count_num != 0)
	{
		long ret = 0;
		int i = 0;
		int j = 1;

		for (i = 0; i < count_num; i++)
		{
			ret += (*(str + count_num + count_str - i - 1) - 48) * j;
			j *= 10;
		}
		if (*(str + count_str - 1) == '-')
		{
			return ((-1) * ret);
		}
		else
		{
			return ret;
		}
	}
	
	return 0;
}

int main()
{
	//模拟实现atoi函数
	char arr[100] = { "    -341234.567" };

	long ret = my_atoi(arr);

	printf("%ld\n", ret);

	return 0;
}