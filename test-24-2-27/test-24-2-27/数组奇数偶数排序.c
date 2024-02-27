#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void move_arr(int arr[], int sz)
{
	int left = 0;

	while (left < sz - 1)
		if (arr[left] % 2 == 1)
		{
			left++;
		}
		else
		{
			arr[sz - 1] += arr[left];
			arr[left] = arr[sz - 1] - arr[left];
			arr[sz - 1] -= arr[left];
			sz--;
		}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//¿É¸ÄÊäÈë
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	move_arr(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}