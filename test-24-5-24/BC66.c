#include <stdio.h>

int main()
{
    //BC66 ţţ��ͨ��
    int n = 0;
    scanf("%d", &n);

    float car = n / 10.0 + 10;
    if (car > n)
    {
        printf("w");
    }
    else
    {
        printf("v");
    }

    return 0;
}