#include <stdio.h>
#include <math.h>
//BC91 Ë®ÏÉ»¨Êý
int main()
{
    int m = 0;
    int n = 0;

    while (scanf("%d %d", &m, &n) != EOF)
    {
        int count = 0;
        for (; m <= n; m++)
        {
            int num = m;
            int sum = 0;

            while (num)
            {
                sum += pow(num%10, 3);
                num /= 10;
            }
            if (sum == m)
            {
                printf("%d ", m);
                count++;
            }
        }
        if (count == 0)
        {
            printf("no");
        }
        printf("\n");
    }    
    
    return 0;
}