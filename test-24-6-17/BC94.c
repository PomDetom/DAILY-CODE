#include <stdio.h>
//BC94 反向输出一个四位数
int main()
{
    int n = 0;
    scanf("%d", &n);
    while (n)
    {
        printf("%d", n % 10);
        n /= 10;
    }
    
    return 0;
}