#include <stdio.h>
//BC82 �˷���
int main()
{
    int i = 1;
    int j = 1;

    for (i = 1; i < 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%2d ", j, i, i*j);
        }
        printf("\n");
    }
    
    return 0;
}