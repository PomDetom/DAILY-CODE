#include <stdio.h>
//BC83 ХЃХЃбЇЪ§Са
int main()
{
    int n = 0;
    scanf("%d", &n);
    int num = 0;
    int i = 0;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            num += (-1) * i;
        }
        else
        {
            num += i;
        }
    }
    printf("%d", num);
    
    return 0;
}