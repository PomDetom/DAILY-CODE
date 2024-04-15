#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

int my_memcmp(const void* str1, const void* str2, size_t num)
{
	assert(str1 && str2);

	while (num--)
	{
		if (*(char*)str1 > *(char*)str2)
		{
			return 1;
		}
		else if (*(char*)str1 < *(char*)str2)
		{
			return -1;
		}
		else
		{
			str1 = (char*)str1 + 1;
			str2 = (char*)str2 + 1;
		}
	}
	return 0;
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[] = { 1,2,3 };

	int ret = my_memcmp(arr1, arr2, 12);
	printf("%d", ret);

	return 0;
}