#include <stdio.h>

int main()
{
    //BC57 ËÄ¼¾
    int num = 0;
    scanf("%d", &num);

    num %= 100;
    if (num >= 3 && num <= 5)
    {
        printf("spring");
    }
    else if (num >= 6 && num <= 8)
    {
        printf("summer");
    }
    else if (num >= 9 && num <= 11)
    {
        printf("autumn");
    }
    else
    {
        printf("winter");
    }
    
    return 0;
}