#include <stdio.h>
//BC101 翻转直角三角形图案
int main()
{
    int num = 0;
    int i = 0;
    int j = 0;

    while (scanf("%d", &num) != EOF)
    {
        for (i = num; i > 0; i--)
        {
            for (j = i; j > 0; j--)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
   
    return 0;
}