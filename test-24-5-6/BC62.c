#include <stdio.h>

int main()
{
    //BC62 统计数据正负个数
    int pos = 0;
    int neg = 0;
    int i = 0;
    int num = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        if (num > 0)
        {
            pos++;
        }
        else if (num < 0)
        {
            neg++;
        }
    }
    printf("positive:%d\nnegative:%d\n", pos, neg);
    
    return 0;
}