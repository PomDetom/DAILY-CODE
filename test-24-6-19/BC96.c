#include <stdio.h>
//BC96 [NOIP2015]½ð±Ò
int main()
{
    int K = 0;
    scanf("%d", &K);
    int gold = 1;
    int all = 0;

    while (K)
    {
        int num = gold;
        while (num && K)
        {
            all += gold;
            num--;
            K--;
        }
        gold++;
    }
    printf("%d", all);
    
    return 0;
}