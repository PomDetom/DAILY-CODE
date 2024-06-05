#include <stdio.h>
//BC67 Å£Å£µÄ½ð±Ò
int main()
{
    int x,y,x1,y1;
    scanf("%d %d", &x, &y);
    scanf("%d %d", &x1, &y1);

    if (x1 > x)
    {
        printf("r");
    }
    else if (x1 < x)
    {
        printf("l");
    }
    else if (y1 > y)
    {
        printf("u");
    }
    else
    {
        printf("d");
    }
    
    return 0;
}