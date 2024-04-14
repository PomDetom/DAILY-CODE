#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

void* my_memcpy(void* str1, const void* str2, size_t num)
{
	assert(str1 && str2);
	void* ret = str1;

	while (num--)
	{
		*(char*)str1 = *(char*)str2;
		str1 = (char*)str1 + 1;
		str2 = (char*)str2 + 1;
	}
	return ret;
}

int main()
{
	//Ä£ÄâÊµÏÖmemcpy
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[20] = { 0 };
	int n = 0;

	int sz = sizeof(arr1);
	void* ret = my_memcpy(arr2, arr1, sz);
	for (n = 0; n < sz/4; n++)
	{
		printf("%d ", arr2[n]);
	}

	return 0;
}