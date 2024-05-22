#include <stdio.h>

int main()
{
    //BC64 Å£Å£µÄ¿ìµİ
    float a = 0;
    char b = 0;
    scanf("%f %c", &a, &b);

    int fees = 20;

    if (a > (int)a)
    {
        (int)a++;
    }
    fees = fees + ((int)a - 1);
    if (b == 'y')
    {
        fees += 5;
    }
    
    printf("%d", fees);

    return 0;
}