#include <stdio.h>
//BC74 获得月份天数
int main()
{
    int year = 0;
    int mon = 0;

    while (scanf("%d %d", &year, &mon) != EOF)
    {
        if (mon == 2)
        {
            if (((year % 400 != 0) && (year % 4 == 0)) || (year % 100 == 0))
            {
                printf("29\n");
            }
            else
            {
                printf("28\n");
            }
        }
        else if ((mon < 8 && mon % 2 == 0) || (mon > 7 && mon % 2 != 0))
        {
            printf("30\n");
        }
        else
        {
            printf("31\n");
        }
    }
    
    return 0;
}