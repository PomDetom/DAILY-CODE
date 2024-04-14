#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);

	while (*str1 == *str2)
	{
		str1++;
		str2++;
		if (*str1 == '\0' && *str2 == '\0')
		{
			return 0;
		}
	}
	return *str1 - *str2;
}

int main()
{
	//Ä£ÄâÊµÏÖstrcmp
	char arr1[] = { "Lianxizuoye" };
	char arr2[] = { "lianxi" };

	int ret = my_strcmp(arr1, arr2);
	if (ret > 0)
	{
		printf("%s", arr1);
	}
	else if (ret = 0)
	{
		printf("=");
	}
	else
	{
		printf("%s", arr2);
	}

	return 0;
}