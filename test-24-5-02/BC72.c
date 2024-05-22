#include <stdio.h>

int main()
{
    //BC72 ţţ�ļƻ�
    int y = 0;
    int m = 0;
    int d = 0;
    int y1 = 0;
    int m1 = 0;
    int d1 = 0;
    scanf("%d %d %d", &y, &m, &d);
    scanf("%d %d %d", &y1, &m1, &d1);

    if (y > y1)
    {
        printf("no");
    }
    else if (y < y1)
    {
        printf("yes");
    }
    else
    {
        if (m > m1)
        {
            printf("no");
        }
        else if (m < m1)
        {
            printf("yes");
        }
        else
        {
            if (d > d1)
            {
                printf("no");
            }
            else if (d <= d1)
            {
                printf("yes");
            }
        }
    }
    
    return 0;
}