#include <stdio.h>

int compare(int a, int b)
{
    if (a > b)
    {
        return a-b;
    }
    else
    {
        return b-a;
    }
}

int main()
{
    //BC156 Å£Å£µÄÊı×éÆ¥Åä
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int a[100] = { 0 };
    int b[100] = { 0 };
    int i = 0;
    int num = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        num += a[i];
    }
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int sum1 = num;
    int sum2 = 0;
    int j = 0;
    int k = 0;
    int ret = 0;
    int x = 0;
    int y = 0;

    for (i = 0; i < m; i++)
    {
        for (j = i; j < m; j++)
        {
            sum2 = 0;
            for (k = i; k <= j; k++)
            {
                sum2 += b[k];
            }
            ret = compare(sum1,sum2);
            if (ret < num)
            {
                num = ret;
                x = i;
                y = j;
            }
        }
    }
    
    for (i = x; i <= y; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}