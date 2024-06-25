#include <stdio.h>
//BC99 正方形图案
int main()
{
    int num = 0;
    int i = 0;
    int j = 0;

    while (scanf("%d", &num) != EOF)
    {
        for (i = 0; i < num; i++)
        {
            for (j = 0; j < num; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    
    return 0;
}