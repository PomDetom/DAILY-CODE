#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //ţ����BC 122
    //���������ж�
    //����һ���������У��ж��Ƿ����������У�����ָ�����е�������С����������ߴӴ�С����(��ͬԪ��Ҳ��Ϊ����)��
    //������������һ������һ������N(3��N��50)���ڶ�������N���������ÿո�ָ�N��������
    //������������Ϊһ�У���������������sorted���������unsorted��
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