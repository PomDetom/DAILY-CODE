#include <stdio.h>
//BC97 回文对称数
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i <= n; i++)
    {
        int num = i;
        int sum = 0;
        while (num)
        {
            sum *= 10;
            sum += num % 10;
            num /= 10;
        }
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}