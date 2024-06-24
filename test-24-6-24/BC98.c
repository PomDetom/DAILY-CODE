#include <stdio.h>
//BC98 Ïß¶ÎÍ¼°¸
int main()
{
    int num = 0;
    int i = 0;
    while (scanf("%d", &num) != EOF)
    {
        for (i = 0; i < num; i++)
        {
            printf("*");
        }
        printf("\n");
    }
   
    return 0;
}