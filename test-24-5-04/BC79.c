#include <stdio.h>

int main()
{
    //BC79 С�������
    long n = 0;
    int i = 0;
    long sum = 0;
    scanf("%ld", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%ld", sum);

    return 0;
}