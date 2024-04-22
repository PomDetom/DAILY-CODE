#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //牛客网BC 122
    //有序序列判断
    //输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。
    //输入描述：第一行输入一个整数N(3≤N≤50)。第二行输入N个整数，用空格分隔N个整数。
    //输出描述：输出为一行，如果序列有序输出sorted，否则输出unsorted。
    int N = 0;
    scanf("%d", &N);

    int arr[50] = { 0 };
    int i = 0;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num = 0;
    if (arr[0] <= arr[N - 1])
    {
        int j = 0;
        while (arr[j] <= arr[j + 1] && j != N - 1)
        {
            j++;
            num++;
        }
        if (num == N - 1)
        {
            printf("sorted");
        }
        else
        {
            printf("unsorted");
        }
    }
    else
    {
        int j = 0;
        while (arr[j] >= arr[j + 1] && j != N - 1)
        {
            j++;
            num++;
        }
        if (num == N - 1)
        {
            printf("sorted");
        }
        else
        {
            printf("unsorted");
        }
    }

    return 0;
}