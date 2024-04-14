#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

char* my_strstr(const char* arr1, const char* arr2)
{
	char* str1 = arr1;
	char* str0 = arr1;
	char* str2 = arr2;

	assert(str1 && str2);
	while (*str0)
	{
		str1 = str0;
		str2 = arr2;

		while (*str1 == *str2)
		{
			str1++;
			str2++;
			if (*str2 == '\0')
			{
				return str0;
			}
		}
		str0++;
	}
	return NULL;
}

int main()
{
	//模拟实现strstr()功能
	char haystack[] = { "sssllllianxizuoye" };
	char needle[] = { "lianxi" };
	char* ret = my_strstr(haystack, needle);

	if (ret == NULL)
	{
		printf("未找到。\n");
	}
	else
	{
		printf("%s\n", ret);
	}

	return 0;
}