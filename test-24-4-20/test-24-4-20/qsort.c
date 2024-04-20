#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int compar_int(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int compar_char(const void* a, const void* b)
{
	return (*(char*)a - *(char*)b);
}

void my_qsort(void* base, size_t nitems, size_t size, int (*compar)(const void* a, const void* b))
{
	int i = 0;

	if (size > 1)
	{
		for (i = 0; i < nitems - 1; i++)
		{
			int num = 0;
			int j = 0;
			for (j = 0; j < nitems -1 - i; j++)
			{
				int ret = compar_int((int*)base + j, (int*)base + j + 1);
				if (ret > 0)
				{
					int n = *((int*)base + j);
					*((int*)base + j) = *((int*)base + j + 1);
					*((int*)base + j + 1) = n;
					num++;
				}
			}
			if (num == 0)
			{
				break;
			}
		}
	}
	else
	{
		for (i = 0; i < nitems - 1; i++)
		{
			int num = 0;
			int j = 0;
			for (j = 0; j < nitems - 1 - i; j++)
			{
				int ret = compar_char((char*)base + j, (char*)base + j + 1);
				if (ret > 0)
				{
					char m = *((char*)base + j);
					*((char*)base + j) = *((char*)base + j + 1);
					*((char*)base + j + 1) = m;
					num++;
				}
			}
			if (num == 0)
			{
				break;
			}
		}
	}
}

int main()
{
	//模拟实现qsort()函数
	int arr1[] = { 54,83,29,9,44,54,27,11 };
	char arr2[] = "KDdiJFdgfkIbcIX";
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	int len2 = strlen(arr2);

	int n = 0;

	printf("排序前：");
	for (n = 0; n < len1; n++)
	{
		printf("%d ", arr1[n]);
	}
	printf("\n%s", arr2);

	my_qsort(arr1, len1, sizeof(arr1[0]), compar_int);
	my_qsort(arr2, len2, sizeof(arr2[0]), compar_char);

	printf("\n排序后：");
	for (n = 0; n < len1; n++)
	{
		printf("%d ", arr1[n]);
	}
	printf("\n%s", arr2);

	return 0;
}