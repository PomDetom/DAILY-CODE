#include <stdio.h>
//BC84 ХЃХЃбЇЪ§Са2
int main() 
{
    int N = 0;
    scanf("%d", &N);
    double sum = 0;
    int i = 0;

    for (i = 1; i <= N; i++)
    {
        double num = 1.0 / i;
        sum += num;
    }
    printf("%.6f", sum);
    
    return 0;
}