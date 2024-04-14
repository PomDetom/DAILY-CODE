#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char* my_strtok(char* str1, const char* str2)
{
	static char* str0 = NULL;

	if (str1 != NULL)
	{
		const char* ret1 = str1;
		while (*str2)
		{
			str1 = ret1;
			while (*str1 != *str2 && *str1 != '\0')
			{
				str1++;
			}
			if (*str1 == *str2)
			{
				*str1 = '\0';
				str0 = str1;
				return ret1;
			}
			str2++;
		}
		str0 = str1;
		return ret1;
	}
	else
	{
		const char* ret2 = (str0 + 1);
		char* str3 = NULL;
		if (*ret2 == '\0')
		{
			return NULL;
		}
		while (*str2)
		{
			str3 = ret2;
			while (*str3 != *str2 && *str3 != '\0')
			{
				str3++;
			}
			if (*str3 == *str2)
			{
				*str3 = '\0';
				str0 = str3;
				return ret2;
			}
			str2++;
		}
		str0 = str3;
		return ret2;
	}
}

int main()
{
	//模拟实现strtok
	//待解决问题：每一个打印结果会换行。
	char arr1[] = { "pomdetom@@@gmail..com" };
	char arr2[] = { "@." };
	char arr0[30] = { 0 };
	strcpy(arr0, arr1);

	char* ret = NULL;
	for (ret = my_strtok(arr0, arr2); ret != NULL; ret = my_strtok(NULL, arr2))
	{
		printf("%s\n", ret);
	}

	return 0;
}