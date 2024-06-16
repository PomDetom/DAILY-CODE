#include <stdio.h>
//BC92 变种水仙花
int main()
{
    int num = 10000;

    while (num < 100000)
    {
        int count = (num/10000) * (num%10000)
                    +(num/1000) * (num%1000)
                    +(num/100) * (num%100)
                    +(num/10) * (num%10);
        if (count == num)
        {
            printf("%d ", count);
        }
        num++;
    }
    
    return 0;
}