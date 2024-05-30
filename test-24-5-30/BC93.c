#include <stdio.h>

int main()
{
    //BC93 公务员面试
    int i = 0;
    int max = 0;
    int min = 100;
    int count = 0;
    int num = 0;

    while (scanf("%d", &i) != EOF)
    {      
        if (i > max)
        {
            max = i;
        }
        if (i < min)
        {
            min = i;
        }
        num += i;
        count += 1;

        if (count == 7)
        {
            float ave = (num - max - min) / 5.0;
            printf("%.2f\n", ave);
            max = 0;
            min = 100;
            count = 0;
            num = 0;
        }
    }

    return 0;
}