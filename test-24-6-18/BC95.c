#include <stdio.h>
//BC95 小乐乐与进制转换
int main()
{
    int num = 0;
    scanf("%d", &num);

    int arr[10] = { 0 };
    int i = 0;
    while (num)
    {
        arr[i] = num % 6;
        num /= 6;
        i++;
    }
    while (i > 0)
    {
        i--;
        printf("%d", arr[i]);
    }
    
    return 0;
}