#include <stdio.h>
//BC100 直角三角形图案
int main()
{
    int num = 0;
    int i = 0;
    int j = 0;
    while (scanf("%d", &num) != EOF)
    {
        for (i = 1; i <= num; i++)
        {
            for (j = 0; j < i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    

    return 0;
}