#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

char* my_strncat(char* str1, const char* str2, size_t n)
{
	char* ret = str1;
	int m = 0;

	assert(str1 && str2);
	while (*str1)
	{
		str1++;
	}
	for (m = 0; m < n; m++)
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';

	return ret;
}

int main()
{
	//Ä£ÄâÊµÏÖstrncat
	char arr1[20] = { "lianxi" };
	char arr2[] = { "zuoyeeee" };

	char* ret = my_strncat(arr1, arr2, 5);
	printf("%s\n", ret);

	return 0;
}