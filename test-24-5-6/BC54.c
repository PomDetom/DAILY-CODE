#include <stdio.h>

int main()
{
    //BC54 Å£Å£µÄÅÐ¶ÏÌâ
    int x = 0;
    int l = 0;
    int r = 0;
    scanf("%d %d %d", &x, &l, &r);

    if (x >= l && x < r)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    
    return 0;
}