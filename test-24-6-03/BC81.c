#include <stdio.h>

//BC81 KiKi求质数个数
int judge_prime(int num)
{
    int i = 2;

    while (i <= num/2)
    {
        if (num % i == 0)
        {
            return 0;
        }
        i++;
    }

    return 1;
}

int main()
{
    int num = 100;
    int count = 0;

    while (num < 1000)
    {
        int ret = judge_prime(num);
        if (ret != 0)
        {
            count++;
        }
        num++;
    }
    printf("%d", count);

    return 0;
}